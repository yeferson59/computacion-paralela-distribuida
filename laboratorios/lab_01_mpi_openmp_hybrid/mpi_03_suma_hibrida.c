#include <stdio.h>
#include <omp.h>
#include <mpi.h>
#include <stdlib.h>

#define N 1000000

int main(int argc, char **argv) {
  int provided;
  MPI_Init_thread(&argc, &argv, MPI_THREAD_FUNNELED, &provided);

  int rank, size;
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);

  int chunk = N / size;

  long long *arr = NULL;
  long long *local = (long long *)malloc(chunk * sizeof(long long));

  if(rank == 0) {
    arr = (long long *)calloc(N, sizeof(long long));
    for(int i = 0; i < N; i++) {
      *(arr + i) = i;
    }
  }

  MPI_Scatter(arr, chunk, MPI_LONG_LONG, local, chunk, MPI_LONG_LONG, 0, MPI_COMM_WORLD);

  long long suma_local = 0;
  #pragma omp parallel for reduction(+:suma_local)
  for(int i = 0; i < chunk; i ++) {
    suma_local += *(local + i);
  }

  long long suma_total = 0;
  MPI_Reduce(&suma_local, &suma_total, 1, MPI_LONG_LONG, MPI_SUM, 0, MPI_COMM_WORLD);

  if (rank == 0) {
    printf("Suma total = %lld\n", suma_total);
    printf("Esperado  = %lld\n", (long long)N*(N-1)/2);
    free(arr);
  }


  free(local);
  MPI_Finalize();
  return 0;
}

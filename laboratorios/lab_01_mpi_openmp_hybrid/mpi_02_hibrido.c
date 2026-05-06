#include <stdio.h>
#include <omp.h>
#include <mpi.h>


int main(int argc, char **argv) {
  int provided;
  MPI_Init_thread(&argc, &argv, MPI_THREAD_FUNNELED, &provided);

  int rank, size;
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);

  int nthrd = 0;

  #pragma omp parallel num_threads(4)
  {
    int thread_id = omp_get_thread_num();
    nthrd = omp_get_num_threads();
    printf("Proceso MPI %d | Hilo OpenMP %d de %d\n", rank, thread_id, nthrd);
  }

  if(rank == 0) {
    printf("Total unidades: %d x %d = %d\n", size, nthrd, nthrd * size);
  }

  MPI_Finalize();
  return 0;
}

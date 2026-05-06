#include <stdio.h>
#include <mpi.h>

int main(int argc, char **argv) {
  MPI_Init(&argc, &argv);

  int rank, size;
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);

  printf("Proceso %d de %d: ¡Hola desde MPI!\n", rank, size);

  if(rank == 0) {
    printf("[MAESTRO] Todos los %d procesos han saludado\n", size);
  }

  MPI_Finalize();
  return 0;
}

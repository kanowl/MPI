#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    // Initialize the MPI environment
    MPI_Init(&argc, &argv);

    // Get the number of processes
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    // Get the rank of the process
    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    // Get the name of the processor
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Get_processor_name(processor_name, &name_len);

    for (int i = 0; i< 99999999999999; i ++){

        for (int j = 0; j< 99999999999999; j++){

            for (int k = 0; k< 99999999999999; k++){

                for (int l = 0; l< 99999999999999; l++){


}



}



}



}

    // Print off a hello world message
   // printf("Hello world from processor %s, rank %d out of %d processors\n",
     //      processor_name, world_rank, world_size);

    // Finalize the MPI environment.
    MPI_Finalize();
}

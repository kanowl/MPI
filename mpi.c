#include <stdio.h>
#include <string.h>
#include <mpi.h>
#include <math.h>

#define ITERATIONS 9e03

int imprimir(double valorInicial, int ID, int numprocs)
{   long int start, end;

    start = (ITERATIONS/numprocs) * ID;
    end = (ITERATIONS/numprocs) + 1;
    long int i = start;

    do {
    	valorInicial = valorInicial + 1;
    	printf("\n Numero: %If \n", valorInicial);
    	i++;
    } while (i < end);

    return 0;
}


int main(int argc, char *argv[])
{
        int done = 0, n, ID, numprocs, I, rc, i;
        
        double valorInicial, valorTotal;
        
        MPI_Init(&argc, &argv);        
        MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
        MPI_Comm_rank(MPI_COMM_WORLD, &ID);
        
        if (ID == 0) printf("\nLaunching with %i processes", numprocs);
        
        imprimir(valorInicial, ID, numprocs);
        
        MPI_Reduce(&valorInicial, &valorTotal, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
      	
        MPI_Finalize();
        return 0; 
}

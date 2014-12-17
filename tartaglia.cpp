#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char *argv[]) {
    int tablero[N][N];

    system("clear");

//bordes
    for (int col=1; col<N; col++)
	tablero[0][col] = 0;

    for (int fila=0; fila<N; fila++)
	tablero[fila][0] = 1;

    for (int fila=1; fila<N; fila++)
	for (int col=1; col<N; col++)
	    tablero[fila][col] = tablero[fila-1][col] + 
		tablero[fila-1][col-1];

    for (int fila=0; fila<N; fila++){
	for (int col=0; col<N; col++)
	    printf("%4i", tablero[fila][col]);
    printf("\n");
    }

    
    return EXIT_SUCCESS;
}

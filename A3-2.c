#include<stdio.h>
#include<stdlib.h>
#define N 3
//A3-2) Permitir la carga automática de una matriz de dimensión NxN y mostrarla por pantalla.

int main(){

int M[N][N];
  int f,c;

printf("EJERCICIO A3-2\n");

    srand(getpid());
        for(f=0; f<N; f++){
            for (c=0; c<N; c++){
              M[f][c]=rand()%11;
            }
            }

    printf("\nEl arreglo de la Matriz de %d x %d quedo:\n", N, N);

        for(f=0; f<N; f++){
            for (c=0; c<N; c++){
                printf("%d ", M[f][c]);
                 }
             printf("\n");
                }
    return 0;
    }

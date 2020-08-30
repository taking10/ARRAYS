#include<stdio.h>
#include<stdlib.h>
#define N 5

//A3-3) Dadas dos matrices de dimensión NxN, llamadas X e Y, mostrar por pantalla la suma de las mismas.
int main(){

int X[N][N];
int Y[N][N];
int XY[N][N];
  int f,c;

printf("EJERCICIO A3-3\n");

    srand(getpid());
        for(f=0; f<N; f++){
            for (c=0; c<N; c++){
              X[f][c]=rand()%10;
              Y[f][c]=rand()%10;
            }
            }

    printf("\nEl arreglo de la Matriz X de %d x %d quedo:\n", N, N);

        for(f=0; f<N; f++){
            for (c=0; c<N; c++){
                printf("%d ", X[f][c]);
                 }
             printf("\n");
                }

    printf("\nEl arreglo de la Matriz Y de %d x %d quedo:\n", N, N);

        for(f=0; f<N; f++){
            for (c=0; c<N; c++){
                printf("%d ", Y[f][c]);
                 }
             printf("\n");
                }

 printf("\nEl arreglo de la Matriz X+Y de %d x %d quedo:\n", N, N);
   for(f=0; f<N; f++){
            for (c=0; c<N; c++){
            XY[f][c]= X[f][c] + Y[f][c];
                printf("%d ", XY[f][c]);
                 }
             printf("\n");
                }
    return 0;
    }

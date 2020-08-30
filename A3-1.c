#include<stdio.h>
#define COL 3
#define FIL 4

//A3-1) Permitir el ingreso de una matriz de enteros de dimensión 3x4 y mostrarla por pantalla.

int main(){
  int M[COL][FIL];
  int f,c;

printf("EJERCICIO A3-1\n");

        for(f=0; f<FIL; f++){
            for (c=0; c<COL; c++){
                printf("Ingrese el valor de la FIL %d de la COL %d: ", f, c);
                scanf("%d", &M[f][c]);
                }
              printf("\n");
            }

    printf("\nEl arreglo de la Matriz de %d x %d quedo:\n", COL, FIL);

        for(f=0; f<FIL; f++){
            for (c=0; c<COL; c++){
                printf("%1d ", M[f][c]);
                 }
             printf("\n");
                }
    return 0;
    }

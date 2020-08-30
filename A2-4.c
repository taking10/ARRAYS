#include <stdio.h>
#define N 10
//2-4) Dado un array A de 10 enteros cargados automáticamente (con números aleatorios), invertir el array, es decir si se tiene el array
//A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1 ], A deberá quedar del siguiente modo al finalizar el programa
//A= [ 1, 22, -200, 105, 99, 6, 80, -5, 11, 45 ]. Considere el uso de una variable a modo de pivote.

int main(){
 int A[N];
  int i;
  int temp;

  srand(getpid());

  printf("EJERCICIO A2.4\n\n");

  for (i=0; i<N; i++){
    A[i] = rand()%101;
        printf("%d, ", A[i]);
}

printf("\n\n");
  for (i=0; i<N/2; i++){ //PARA SOLO MOVER LA MITAD DEL ARREGLO
     temp = A[i];
     A[i] = A[N - 1 - i]; //PARA CAMBIARLO CON LA SEGUNDA MITAD DEL ARREGLO
     A[N - 1 - i] = temp;
  }


  printf("\n\n");
  for (i=0; i<N; i++){
        printf("%d, ", A[i]);
}




 return 0;

}

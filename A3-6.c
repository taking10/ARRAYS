#include<stdio.h>
#define N 5

//A3-6) Dado un array de 10 enteros positivos en el rango [0, 100] cargados aleatoriamente, mostrarlo por pantalla, luego ordenar sus
//elementos de manera ascendente y finalmente mostrar el resultado.

int main(){
int A[N];
int i,j;
  int temp;

  srand(getpid());

  printf("EJERCICIO A3.6\n\n");



  printf("GRUPO A conformado por los numeros:\n");
  for (i=0; i<N; i++){
  A[i] = rand() %101;
        printf("%d, ", A[i]);
        }
for (j=0 ;j<N+1; j++){
    for(i=0; i<N; i++){
            do{
            temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;}
            while (A[i]>A[i+1]);
                }}


printf("\n\nEl Grupo A ordenado de forma ASCENDENTE queda de la siguiente manera:\n");

    for (i=0 ;i<N; i++){
    printf("%d, ", A[i]);
    }
return 0;
}

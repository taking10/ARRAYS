#include<stdio.h>
#define N 4

//A3-4) Declarar un array A de 15 elementos enteros. Solicitar al usuario el ingreso de un valor por vez e ir colocando dicho entero en el
//array, donde cada elemento previo existente en el array A deba ser menor o igual y cada elemento posterior deba ser mayor al que el
//usuario ingresó. En cada paso mostrar el estado del array. Al finalizar deberá quedar el array ordenado de forma ascendente.

int main() {
   int A[N];
   int e, i, j;
   int cant=0; //cantidad de elementos almacenados

   printf("Ingrese el primer elemento del array: ");
   scanf("%d", &A[0]);
   cant++;

printf("\n");
   //se muestra el array
   printf("%d ", A[0]);


for (i=1; i<N; i++){
    do {
        printf("Ingrese el numero de la posicion %d del Array:", i);
        scanf("%d", &e);
    }
    while (e<A[0]);

}
   return 0;
   }

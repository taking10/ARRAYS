#include<stdio.h>
#include<stdlib.h>
#define N 10

//A 2-2) Permita la carga aleatoria de dos arrays de 10 enteros cada uno, llamados A y B, e indique cual de los dos tiene más números pares
//tratando de utilizando como máximo dos bucles for en todo el programa.

int main(){

  int A[N], B[N];
  int i;
  int cont1 = 0, cont2 = 0;

  srand(getpid());

  printf("EJERCICIO A2.2\n\n");

  for (i=0; i<N; i++){
    A[i] = rand()%101;

    if (A[i]%2==0)
     cont1 +=1;
    else
     (cont1);

    printf("El numero de la posicion %d es : %d\n", i, A[i]);
  }

printf("\n");

    for (i=0; i<N; i++){
    B[i] = rand()%1001;

     if (B[i]%2==0)
      cont2 +=1;
     else
      (cont2);
    printf("El numero de la posicion %d es : %d\n", i, B[i]);
  }
    if (cont1 > cont2)
        printf("\nEl Grupo A tiene MAS numeros pares (%d) que el Grupo B (%d)", cont1, cont2);
     else
        if (cont1<cont2){
          printf("\nEl Grupo B tiene MAS numeros pares (%d) que el Grupo A (%d)", cont2, cont1);
          }
         else
          printf("\nEl Grupo A tiene MISMA cantidad de numeros pares (%d) que el Grupo B (%d)", cont1, cont2);

return 0;
}


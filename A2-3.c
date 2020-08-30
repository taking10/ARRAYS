#include<stdio.h>
#include<stdlib.h>
#define N 10

//2-3) Dado un array A de 10 floats cagado aleatoriamente y con valores comprendidos entre 0 y 100, determinar si se tienen más
//elementos PARES QUE IMPARES o bien misma cantidad. Rehaga el ejercicio utilizando un único bucle for si empleo más de uno.

int main(){

  int A[N];
  int i;
  int cont1 = 0, cont2 = 0;

  srand(getpid());

  printf("EJERCICIO A2.3\n\n");

  for (i=0; i<N; i++){
    A[i] = rand()%101;

    if (A[i]%2==0)
     cont1 +=1;
    else
     (cont2 +=1);

    printf("El numero de la posicion %d es : %d\n", i, A[i]);
  }

printf("\n");

    if (cont1 > cont2)
        printf("\nEl Grupo A tiene MAS numeros PARES (%d) que impares (%d)", cont1, cont2);
     else
        if (cont1<cont2){
          printf("\nEl Grupo A tiene MAS numeros IMPARES (%d) que pares (%d)", cont2, cont1);
          }
         else
          printf("\nEl Grupo A tiene MISMA cantidad de numeros PARES (%d) e IMPARES (%d)", cont1, cont2);

return 0;
}

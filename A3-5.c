#include<stdio.h>
#define N 20

//A3-5) Dado un array A de 20 enteros positivos en el rango [0, 100] cargados aleatoriamente, y un entero positivo e, determinar si dicho
//entero e está presente en el array. Extender luego el programa para indicar no solo si está, sino también en cuantas ocasiones aparece.

int main(){
int A[N];
  int i;
  int e;
  int cont = 0;

  srand(getpid());

  printf("EJERCICIO A3.5\n\n");

  printf("GRUPO A conformado por los numeros:\n");
  for (i=0; i<N; i++){
    A[i] = rand()%101;
        printf("%d, ", A[i]);
        }
  do{
   printf("\nIngrese un numero entero positivo: ");
   scanf("%d", &e);}
  while (e<0);

    for (i=0; i<N; i++){
        if (e == A[i])
            cont++;
         else
         (cont);
        }
    if(cont!=0)
    printf("El numero %d, aparece %d veces en el Grupo A", e,cont);
    else
    printf("El numero %d NO APARECE en el Grupo A", e);




                return 0;
}

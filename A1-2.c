#include<stdio.h>
#define N 5

int main(){

  int A [N];
  int B [N];
  int S [N];
  int i;
  int j;
  int s;
  int suma;

    for(i=0; i<N; i++){
        printf("Ingrese un numero entero del Grupo A (posicion %d): ", i);
        scanf("%d", &A[i]);
}
    printf("\n");

    for(j=0; j<N; j++){
        printf("Ingrese un numero entero del Grupo B (posicion %d): ",j);
        scanf("%d", &B[j]);
        }

    for (s = 0, i=0, j=0; i<N; i++, j++,s++){
        S[s] = A[i] + B[j];

        printf("La suma de %d y de %d es: %d", A[i], B[j], S[s]);
        printf("\n");
        }

     for(s=0; s<N; s++){
        printf("La posicion %d es %d",s,S[s]);
        printf("\n");
        }

        return 0;
        }


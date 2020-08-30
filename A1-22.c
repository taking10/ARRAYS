#include<stdio.h>
#include<stdlib.h>
#define N 5

int main(){

  int A [N];
  int B [N];
  int S [N];
  int i, j, s;

  srand(getpid());

    for(i=0; i<N; i++){
        A[i] = rand()%15;
        printf("%d\n", A[i]);
}
    printf("\n");

    for(j=0; j<N; j++){
       B[j] = rand()%15;
        printf("%d\n", B[j]);
        }
printf("\n");
    for (s = 0, i=0, j=0; i<N; i++, j++,s++){
        S[s] = A[i] + B[j];
        printf("La suma de %d y de %d es: %d\n", A[i], B[j], S[s]);

        }
printf("\n");
     for(s=0; s<N; s++){
        printf("La posicion %d es %d",s,S[s]);
        printf("\n");
        }

        return 0;
        }

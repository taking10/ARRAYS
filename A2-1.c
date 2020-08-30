#include<stdio.h>
#include<stdlib.h>
#define N 30

int main(){

  int A[N];
  int i;

  srand(getpid());

  for (i=0; i<N; i++){
    A[i] = rand()%1001;
    printf("El numero de la posicion %d es : %d\n", i, A[i]);
  }

return 0;
}

#include<stdio.h>
#include<stdlib.h>
#define N 10

//A 2-5) Dado un array A de N enteros cargados manualmente o bien de forma automática y un número entero r en el rango [-(N-1), N-1].
//El valor r impondrá rotaciones a derecha (en caso de r positivo) o rotaciones a izquierda (en caso de r negativo) sobre los elementos del
//array A. Una rotación es el cambio de posición en los elementos del array.
//Ejemplo, un array A con N valiendo 10, r estará comprendido en [-9, 9].
//Es decir, dado el array
//A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1],
//Si r= 1 ⇒ A= [ 1, 45, 11, -5, 80, 6, 99, 105, -200, 22 ] Todos los elementos rotaron 1 posición a la derecha
//Si r=-3 ⇒ A= [ -5, 80, 6, 99, 105, -200, 22, 1, 45, 11 ] Todos los elementos rotaron 3 posiciones a la izquierda

int main(){
 int A[N] = {1,2,3,4,5,6,7,8,9,10};
  int i;
  int r, j;
  int temp, temp2;

  srand(getpid());

  printf("EJERCICIO A2.5\n\n");
  for (i=0; i<N; i++){
        printf("%d, ", A[i]);
}

 do{
  printf("\nIngrese un numero entero en el rango  de %d y %d: ", -(N-1), (N-1));
  scanf("%d", &r);
  }
  while (r< -(N-1)|| r>(N-1));

    if (r>0){
        printf("\nTodos los Elementos rotaron %d posiciones a la derecha\n", r);
        for (j=1; j<=r; j++){
            for (i=N-1 ;i>0; i--){
                temp = A[i-1];
                A[i-1] = A[i];
                A[i] = temp;
                      }
                     }
                    }

    else{
       if (r<0)
        {r=(-r);
          printf("\nTodos los Elementos rotaron %d posiciones a la izquierda\n", r);
            for (j=1; j<=r; j++){
                for (i=0 ;i<N-1; i++){
                  temp = A[i+1];
                  A[i+1] = A[i];
                  A[i] = temp;
                }
               }
             }
            }

  for (i=0; i<N; i++){
    printf("%d, ", A[i]);
    }
  return 0;

  }

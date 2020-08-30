#include<stdio.h>
#define N 3

//A1-4) Declare un array A de N floats, se realice la carga manual y pida al usuario un float f en el rango (0, 100] y en un nuevo array P
//establezca los elementos de esta forma. Cada elemento P[i] debe ser de la forma A[i]*f para i=0...N-1.

int main(){
  float A[N], P[N];
  int i;
  float x;

  for(i=0; i<N; i++){
    printf("Ingrese un numero entero del Grupo A (posicion %d): ", i);
    scanf("%f", &A[i]);
    }

 printf("\n");

    do {
    printf("Ingrese un numero (puede ser con coma) en el rango de 1 y 100: ");
    scanf("%f", &x);
    }
    while (x<=0 || x>100);

   for (i=0; i<N; i++){
     P[i] = A[i]*x;
    }

 printf("\n");

   for(i=0; i<N; i++){
        printf("El numero de la posicion %d del Grupo A es: %.2f", i, A[i]);
        printf("\n");
        }
 printf("\n");

   for (i=0; i<N; i++){
        printf("El prod. entre el num de la pos. %d del Grupo A y el ingresado por el usuario es: %.2f", i,P[i]);
        printf("\n");
        }

return 0;
}

#include <stdio.h>
#define N 10

//A1-5) Dado un array de 10 floats, mostrar por pantalla cuales elementos superan al promedio.

int main(){
float A[N];
int i;
float suma = 0;
float prom;

    for(i=0; i<N; i++){
      printf("Ingrese un numero decimal en la posicion %d del Grupo A: ", i);
      scanf("%f", &A[i]);
      suma +=A[i];
    }

    printf("\nLa suma total de los numeros ingresados es: %.2f\n", suma);

prom = suma /N;
    printf("\nEl promedio es: %.2f\n", prom);

    for(i=0; i<N;i++){
       if (A[i]> prom)
        printf("El numero de la posicion %d (%.2f) supera al promedio\n", i, A[i]);
       else;
        }
    return 0;
    }

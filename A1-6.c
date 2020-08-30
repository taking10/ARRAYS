#include<stdio.h>
#define N 3


//A1-6) Declare un array de 10 enteros en el rango [0, 100] (asegurarlo) y muestre por pantalla dichos elementos junto con la suma, el
//promedio y la varianza.

int main(){

 float A[N];
 int i;
 int suma = 0;
 int sumvar = 0;
 int prom, potencia, varianza;


 for (i=0; i<N; i++){
    printf("Ingrese un numero entero en el rango de 1 y 100: ");
    scanf("%f", &A[i]);

    while (A[i]<1|| A[i]>100){
    printf("POR FAVOR Ingrese un numero entero en el rango de 1 y 100: ");
    scanf("%f", &A[i]);
        }
    }
    printf("\n");
    for (i=0; i<N; i++){
        printf("El numero de la posicion %d del Grupo A es: %.0f\n", i, A[i]);
        suma+= A[i];
        }

    printf("\nLa SUMA TOTAL de los elementos del Grupo A es: %d\n", suma);
    prom = suma/N;
    printf("El PROMEDIO de los elementos del Grupo A es: %d\n\n", suma/N);

    for(i=0; i<N; i++){
        potencia = pow((A[i] - prom),2);
        printf("La potencia del elemento %d menos el promedio es: %d\n",i, potencia);
        sumvar += potencia;
        }

    varianza = sumvar / (N-1);
    printf("\nLa VARIANZA del conjunto A es: %d\n", varianza);


return 0;
}

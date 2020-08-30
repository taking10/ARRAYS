#include<stdio.h>
#define N 5
//Programa que permite: obtener el promedio de N floats

int main() {
    float nros[N];  //array de N floats ... nros[0],nros[1],... el ultimo  es nros[4]
    //float notas[N]={4.6, 7.7, 10, 2.4, 8.9};
    float prom = 0;
    int i;
    //introducir elementos del array
    for(i=0; i<N; i++) {
        printf("Ingrese un numero (pos %d): ", i);
        scanf("%f", &nros[i]);
    }

    printf("Numeros introducidos\n");
    for(i=0; i<N; i++) {
        printf("%.2f ", nros[i]);
        prom = prom + nros[i];
    }

    printf("\nEl promedio es %.2f\n", prom/N);

    printf("\nAl reves\n");
    for(i=N-1; i>=0; i--) {
        printf("%.2f ", nros[i]);
    }
    printf("\n");

   return 0;
}

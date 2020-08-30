#include<stdio.h>
//Programa que permite: obtener el promedio de 3 floats

int main() {
    float f1, f2, f3;
    float prom = 0;

    printf("Ingrese un numero: ");
    scanf("%f", &f1);

    printf("Ingrese otro numero: ");
    scanf("%f", &f2);

    printf("Ingrese un ultimo numero: ");
    scanf("%f", &f3);

    prom = (f1 + f2 + f3) / 3;

    printf("El primedio es %f\n", prom);

   return 0;

}

#include <stdio.h>
#define N 5

//A1-1) Declare un array de 10 enteros y permita que el usuario ingrese valores comprendidos entre el -10 y el 10 (asegurar esto) y luego lo
//muestre por pantalla.

int main(){

    printf("Ejercicio A1-1 \n");

    int x[N];
    int i;

    for(i=0; i<N; i++){
        printf("Ingrese un numero entre el -10 y el 10 (posicion %d): ", i);
        scanf("%d", &x[i]);

        while (x[i]> 10 || x[i]< -10){
        printf("Por favor ingrese un numero entre el -10 y el 10 (posicion %d): ", i);
        scanf("%d", &x[i]);
    }
}
   printf("\n Los numeros ingresados son: \n");
    for (i=0; i<N; i++){
        printf("%d\n", x[i]);
    }

return 0;
}

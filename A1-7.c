#include<stdio.h>
#define X 3

//A1-7) Declare dos arrays de 10 enteros con valores entre [0, 50] llamados M y N, luego determine si son:
//- iguales: cuando cada componente ubicada en misma posición coincide.
//- similares frente a suma: cuando no tienen las mismas componentes pero la suma de los elementos coincide
//- diferentes: cuando no coinciden ni en las componentes ni en la suma


int main(){

 int M[X], N[X];

 int i;
 int j;
 int suma_M = 0, suma_N = 0;
 int cont1 = 0;

    for (i=0; i<X; i++){
        printf("Ingrese un num entero para la pos. %d del Grupo M, en el rango de 0 y 50: ", i);
        scanf("%d", &M[i]);

        while (M[i]<0|| M[i]>50){
            printf("POR FAVOR Ingrese un numero entero en el rango de 0 y 50: ");
            scanf("%d", &M[i]);
            }
        }
        printf("\n");
    for (j=0; j<X; j++){
        printf("Ingrese un num entero para la pos. %d del Grupo N, en el rango de 0 y 50: ", j);
        scanf("%d", &N[j]);

        while (N[j]<0|| N[j]>50){
            printf("POR FAVOR Ingrese un numero entero en el rango de 0 y 50: ");
            scanf("%d", &N[j]);
            }
        }

    //COMPARAR SI SON IGUALES EN NUMEROS Y POSICION
    for (i=0, j=0; i<X; i++, j++ ){
        suma_M += M[i];
        suma_N += N[j];
        if (M[i] == N[j])
            cont1 = cont1 + 1;
        else (cont1);
        }

            if (cont1 == X)
            printf("\nLos conjuntos M y N  tienen TODOS los elementos en comun en la misma posicion\n");
            else
             if (suma_M == suma_N){
                printf("\nLos conjuntos M y N NO SON IGUALES\n");
                printf("\nLos conjuntos M y N SON SIMILARES FRENTE A SUMA\n");
                }
             else
                printf("\nLos conjuntos M y N SON DIFERENTES\n");

        return 0;
        }


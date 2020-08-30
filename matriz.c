#include<stdio.h>
#define FIL 2
#define COL 3
//Programa que permite: obtener el promedio de N floats


int main() {
    float m[FIL][COL];
    /*      0     1    2
      0:  3.2    4.6 -7.0
      1:  0.0   10.0  2.8
    */
    int f, c;
    for(f=0; f<FIL; f++) {
       for (c=0; c<COL; c++) {
           printf("Ingrese el valor en fila: %d y col %d: ", f, c);
           scanf("%f", &m[f][c]);
        }
    }

    for(f=0; f<FIL; f++) {
       for (c=0; c<COL; c++) {
           printf("%.2f ", m[f][c]);
        }
        printf("\n");
    }

   return 0;
}

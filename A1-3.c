#include<stdio.h>
#define N 6

//A1-3) Declare un array de 10 enteros, permita la carga manual y luego determine lo siguiente:
//- cuantos elementos son positivos y pares
//- cuantos elementos son positivos e impares
//- cuantos elementos son negativos y pares
//- cuantos elementos son negativos e impares
int main(){

 int A[N];
 int i;
 int negpar = 0;
 int negimp = 0;
 int pospar = 0;
 int posimp = 0;

  for(i=0; i<N; i++){
        printf("Ingrese un numero entero del Grupo A (posicion %d): ", i);
        scanf("%d", &A[i]);
    if (A[i]>=0){
      if (A[i]%2==0){
      pospar = pospar + 1;
      }
      else {
      posimp = posimp + 1;
      }
      }
      else {
      if (A[i]%2==0){
      negpar = negpar + 1;
      }
        else {
        negimp = negimp +1;
        }
      }

}
printf("neg imp = %d\n", negimp);
printf("neg par = %d\n", negpar);
printf("pos imp = %d\n", posimp);
printf("pos par = %d\n", pospar);

return 0;
}

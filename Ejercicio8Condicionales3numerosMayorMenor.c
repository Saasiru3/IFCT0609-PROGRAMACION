/* escribir un programa que pida 3 numeros y los muestre en pantalla de mayor a menor en lineas distintas. 
/*en caso de haber numeros iguales se intan en la misma linea*/
#include<stdio.h>
int main(){
    int a,b,c;
    a=0;
    b=0;
    c=0;
    printf("ingrese el primer numero: ");
    scanf ("%d",&a);
    printf("ingrese el segundo numero: ");
    scanf("%d",&b);
    printf("ingrese el tercer numero: ");
    scanf("%d",&c);
    if ((a >= b) && (a >= c)){
        if (b >= c) {
            printf ("%d\n%d\n%d\n",a,b,c);
        } else {
            printf ("%d\n%d\n%d\n",a,c,b);
        }
    } else if ((b >= a) && (b >= c)) {
        if (a >= c) {
            printf ("%d\n%d\n%d\n",b,a,c);
        } else {
            printf ("%d\n%d\n%d\n",b,c,a);
        }
    } else {
        if (a >= b) {
            printf ("%d\n%d\n%d\n",c,a,b);
        } else {
            printf ("%d\n%d\n%d\n",c,b,a);
        }
    }
        return 0;
    }
      

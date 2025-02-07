/*realiza un programa que solicite la carga por teclado de dos numeros,
si el primero es el myor al segundo informar de su suma y diferencia,
en caso contrario informar el producto y la división del primero recpecto al 2º*/
#include <stdio.h>
int main () {
    int numero1=0, numero2=0;
    int suma=0, resta=0, producto=0, division=0;
    
    printf ("Introduzca los numeros: \n");
    scanf ("%d",&numero1);
    scanf ("%d",&numero2);

    if (numero1>numero2) {
        suma = numero1 + numero2;
        resta = numero1 - numero2;
        printf ("la suma de los numeros es: %d\n",suma );
        printf ("la resta de los numeros es: %d\n", resta);
    } else 
           if (numero1<numero2) {
            producto = ( numero1 * numero2);
            division = ( numero1 / numero2);
            printf ("%d\n", producto);
            printf ("%d\n", division);
            }
    

        
        return 0;
}   

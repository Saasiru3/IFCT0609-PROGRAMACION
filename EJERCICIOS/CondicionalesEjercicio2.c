/*realiza un programa que solcite al operador ingresar dos numeros y muestre,
en pantalla el mayor de ellos*/
#include <stdio.h>/*Que es la biblioteca standar de entrada y salida*/
                /*printf , scanf, puts y gets*/
int main(){
    int numero1=0, numero2=0;
    
    printf ("Ingrese los dos numeros: ");
    scanf ("%d",&numero1);
    scanf ("%d",&numero2);

    if (numero1>numero2)
    {
        printf("numero1 es el mayor: %d", numero1);
        
    } else
        {
         printf("el numero2 es el mayor: %d", numero2);
        }
        
    return 0;
}

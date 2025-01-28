#include <stdio.h>
/*Definir funcion principal*/
int main() {
    /*Definir variable*/
    int num1, num2, suma, producto;
    /*solicitar los datos al ambiente*/
    printf ("Introduzca los dos numeros: ");
    scanf ("%d %d",&num1, &num2);
    /*Realizar las operaciones*/
    suma = num1 + num2;
    producto = num1 * num2;
    /*Imprimir los resultados*/
    printf ("la suma de los dos numeros es: %d\n", suma);
    printf ("el producto de los dos numeros es: %d\n", producto);
    
    return 0;
}
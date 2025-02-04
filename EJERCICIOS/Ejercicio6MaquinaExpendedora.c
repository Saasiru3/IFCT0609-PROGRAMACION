/*Solicitar la carga de dos numeros enteros por teclado e imprimir su suma y su producto*/

#include<stdio.h> /*Que es la biblioteca standar de entrada y salida*/
                /*printf , scanf, puts y gets*/
int main (){ /* es la declaracion de la funcion principal*/ /*int devolvera valor entero*/
int numero1, numero2; /*definir tipo variable, int, float, char*/
int suma, producto;

numero1= 0;
numero2=0;                 /*Inicializar las variables*/
suma =0;
producto =0;

printf ("ingrese el primer numero: ");
scanf ("%d", &numero1);
printf ("ingrese el segundo numero: ");
scanf ("%d", &numero2);

suma = numero1 + numero2;    /*Operaciones +, -, *, /, % (modulo), ==, etc*/
producto = numero1 * numero2;

printf ("la suma de los numeros es: %d\n", suma); /* identificador, como entero*/
printf ("El producto de los dos numeros es: %d\n", producto);

return 0;
}


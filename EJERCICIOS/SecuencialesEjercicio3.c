/*Escribir un programa en el cual se ingresen cuatro números, calcular e informar
la suma de los dos primeros y el producto del tercero y el cuarto.*/

#include <stdio.h>   /*Que es la biblioteca standar de entrada y salida*/
                    /*printf , scanf, puts y gets*/
int main (){        /* es la declaracion de la funcion principal*/ /*int devolvera valor entero*/
                    /* {} es donde se ecribe el codigo que el programa ejecutarça*/
int numero1, numero2, numero3, numero4, suma, producto;       /*definir tipo variable, int, float, char*/
numero1=0;
numero2=0;
numero3=0;
numero4=0;                                   /*Inicializar las variables*/
suma=0;
producto=0;

printf ("Introduzca los numeros:\n");
scanf ("%d", &numero1);
scanf ("%d", &numero2);
scanf ("%d", &numero3);
scanf ("%d", &numero4);

suma= numero1 + numero2;            /*Operaciones +, -, *, /, % (modulo), ==, etc*/
producto= numero3 * numero4;

printf ("la suma de los dos primeros es: %d\n", suma);
printf ("El producto de los dos ultimos es: %d\n", producto);   /*Mostramos el resultado \n es salto de linea*/

return 0;
}

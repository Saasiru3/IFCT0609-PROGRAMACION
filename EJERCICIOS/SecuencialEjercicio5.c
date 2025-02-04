/*Se debe desarrollar un programa que pida el ingreso del precio de un artículo y
la cantidad que lleva el cliente. Mostrar lo que debe abonar el comprador.
Definir una variable de tipo float para el precio del artículo*/

#include<stdio.h>   /*Que es la biblioteca standar de entrada y salida*/
                    /*printf , scanf, puts y gets*/
int main () {       /* es la declaracion de la funcion principal*/ /*int devolvera valor entero*/

int cantidad;                        /*definir tipo variable, int, float, char*/
float precioArticulo, TotalAbonar; /*definimos tipo de variable flotante para decimales*/

cantidad=0,precioArticulo=0, TotalAbonar=0;  /*Inicializar las variables*/

printf("Introduce cantidad: ");
scanf ("%d",&cantidad);                    /*pedimos los datos al ambiente (& ampersand)*/

printf("Introduce precioArticulo: ");
scanf ("%f",&precioArticulo);              /*pedimos los datos al ambiente (& ampersand)*/

TotalAbonar = (precioArticulo * cantidad);    /* realizamos Operaciones +, -, *, /, % (modulo), ==, etc*/

printf ("El total a pagar es: %.2f\n", TotalAbonar);
return 0;
}
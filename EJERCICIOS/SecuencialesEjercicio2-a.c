/*Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro de
este (El perímetro de un cuadrado se calcula multiplicando el valor del lado por
cuatro)*/
#include <stdio.h>/*Que es la biblioteca standar de entrada y salida*/
                  /*printf , scanf, puts y gets*/

int main(){/* es la declaracion de la funcion principal*/ /*int devolvera valor entero*/
            /* {} es donde se ecribe el codigo que el programa ejecutarça*/

    int lado, perimetro;/*definir tipo variable, int, float, char*/
    lado=0;             /*Inicializar las variables*/
    perimetro=0;

    printf ("Introduzca lado: ");   /*solicitamos datos al medio*/
    scanf ("%d", &lado);

    perimetro=lado*4;           /*realizamos las operaciones*/

    printf ("el perimetro del cuadrado es: %d\n", perimetro); /*mostramos el resultado*/

    return 0; /*nos devuelve un entero*/
}
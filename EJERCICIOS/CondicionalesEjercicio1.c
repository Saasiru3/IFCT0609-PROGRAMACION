/*Ingrese el sueldo de una persona, si supera los 3000 euros mostar,
un mensaje indicando que debe abandonar impuesto*/

#include<stdio.h>
                          /*Que es la biblioteca standar de entrada y salida*/
                          /*printf , scanf, puts y gets*/
int main () {             /* es la declaracion de la funcion principal*/ /*int devolvera valor entero*/

    int sueldo = 0;         /*Declaración, definir tipo variable, int, float, char*/
                          /* Inicializar variables*/

    printf ("Introduzca el sueldo: ");  /*Solicitamos los datos al ambiente*/
    scanf ("%d", &sueldo);
    
    if (sueldo>3000){
        printf ("tiene que pagar Impuestos");
    } else
    { if (sueldo < 300);
        printf ("Esta exento de pagar Impuestos");
    }
    return 0;
}
                
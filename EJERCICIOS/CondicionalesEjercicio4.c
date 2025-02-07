/*Ingresar por teclado un numero positivo de uno o dos digitos, mostrar un mensaje,
indicando si el numero tiene uno o dos digitos*/

#include <stdio.h>  /*incluimos a la biblioteca standar de entrada y salida*/
int main () {       /*Declaramo la funcion principal*//*intt devovera un entero*/
    int numero=0;   /*definir tipo variable, int, float, char*/ /*inicializamos ahora o despues*/
    
    printf ("Introducir numero");       /*solicitar los datos*/
    scanf ("%d", &numero);              /*leer los datos*/
        if (numero > 0 && numero < 10) {
            printf ("numero introducido es de un digito"); /*que es lo que queremos que salga por pantalla*/
        } else
            if (numero > 9 && numero < 100) {
            printf ("el numero introducido es de dos digitos");
            }
            return 0;
}

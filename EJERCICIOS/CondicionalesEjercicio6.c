/* Escribir un programa que lea un caracter de teclado e informe de si es alfabetico (a-z), numero,
(0-9) o signo de puntuación(.,;:). Si no coincide con ninguno de estos tipos el programa debe mostrar,
por pantalla el siguientes mensaje "El caracter es desconocido"*/
#include<stdio.h> /*incluimos a la biblioteca standar de entrada y salida*/
#include<ctype.h>/*es la biblioteca estandar parar pruebas y manipulaciones de caracteres*/

int main (){

        char caracter;  /*Definimo variable en este caso como Caracter*/

        printf("Introduce el caracter: "); /*solicitamos los datos al medio*/
        scanf("%c", &caracter);            /* Read a character from input and store it in the variable 'caracter' */

        if (isalpha(caracter)) {
            printf("El caracter es alfabetico.\n");
        } else if (isdigit(caracter)) {
            printf("El caracter es numerico.\n");
            
        } else if (caracter == '.' || caracter == ',' || caracter == ';' || caracter == ':'){
                printf("El caracter es un signo de puntuacion.\n");
           
        } else {
                printf("El caracter es desconocido.\n");
            }   
            return 0;            

}
#include<stdio.h>
/*Definir funcion principal */
int main(){
    /*Definir variables*/
    int num1, num2, suma;
    /*Solicitar datos al usuario*/
    /*llamada a la función printf*/
    printf("Introduzca el primer numero:");
    /*llamada a la funcion scanf*/
    scanf("%d %d", &num1, &num2);
    /*Realizar la suma de los dos numeros*/
    suma = num1 + num2;
    /*Imprimir el resultado de la suma*/
    printf ("La suma de los dos numros es: %d", suma);
    /*Retornar un valor entero*/
    return 0;


}
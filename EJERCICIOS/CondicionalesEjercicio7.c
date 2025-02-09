/*Escribir un programa que pida un numero del 1 al 7 y diga el dia de la semana correspondiente.
Repetirlo utilizando otra estructura condicional diferente*/
#include<stdio.h>   /*incluimos a la biblioteca standar de entrada y salida*/
int main () {

    int dia;

    printf("Ingrese el dia del 1 al 7: \n");
    scanf("%d",&dia);

    switch (dia) {

            case 1:
                    printf("el dia de la semana es: Lunes\n");
                    break;
            case 2:
                    printf("El dia de la semana es : Martes\n");
                    break;
            case 3:  
                    printf ("el dia de la semana es: Miercoles\n");
                    break;
            case 4:
                    printf ("el dia de la semana es: Jueves\n");
                    break;
            case 5: 
                    printf ("el dia de la semana es: Viernes\n");
                    break;
            case 6: 
                    printf ("el dia de la semana es: Sabado\n");
                    break;
            case 7:
                    printf ("el dia de la semana es: Domingo\n");
                    break;
            default:
                    printf ("Numero invalido, introducir del 1 al 7");
                    break;
    }
    return 0;
}
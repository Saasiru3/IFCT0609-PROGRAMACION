/*Ejercicio 7 Escribir un program que pida del 1 al 7 y/* 
/*diga el dia de la semana correspondiente. Repitelo/* 
/*utilizando otra estructura condicional diferente*/
#include<stdio.h>
int main() {
    int dia;
    printf("Introduce un numero del 1 al 7: ");
    scanf("%d", &dia);
    switch (dia) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miercoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Numero incorrecto\n");
        return 0;
    }
}
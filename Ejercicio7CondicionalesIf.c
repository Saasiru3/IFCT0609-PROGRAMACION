/*Ejercicio 7 Escribir un program que pida del 1 al 7 y/* 
/*diga el dia de la semana correspondiente. Repitelo/* 
/*utilizando otra estructura condicional diferente*/

#include<stdio.h>
int main () {
    int dia;
    printf ("Introduce un numero del 1 al 7: ");
    scanf ("%d",&dia);
    if (dia==1) {
        printf ("lunes\n");
    }
            if (dia ==2){
                printf ("martes\n");
            }
                if (dia ==3){
                    printf ("miercoles\n");
                    }
                        if (dia==4){
                            printf ("jueves");
                        }
                            if (dia==5){
                                printf ("viernes\n");
                                }
                                    if (dia==6) {
                                        printf ("sabado\n");
                                    }
                                       if (dia==7){
                                            printf ("domingo\n");
                                            }
    
        
    return 0;


}
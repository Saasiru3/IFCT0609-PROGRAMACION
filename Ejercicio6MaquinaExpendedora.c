#include <stdio.h>
/*Declarar funcion principal*/
int main () {
    /*Definir variables*/
int C50, C20, C10, C5,resto;
float cantidad;

printf ("Introduzca la cantidad de dinero: ");
/*llamamos a la funcion scanf para leer*/
scanf ("%f", &cantidad);
/*convertir en centimos*/
cantidad= (int) (cantidad*100);

C50=cantidad/50;
resto=resto%50;;

C20=cantidad/20;
resto=resto%20;

C10=cantidad/10;
resto=resto%10; 

C5=resto/5;

/*mostrar resultados*/
printf ("El total de monedas de 50 cnts es: %d\n", C50);
/*mostrar resultados*/
printf ("El total de monedas de 20 cnts es: %d\n", C20);
/*mostrar resultados*/
printf ("El total de monedas de 10 cnts es: %d\n", C10);
/*mostrar resultados*/
printf ("El total de monedas de 5 cnts es: %d\n", C5);
return 0;
}

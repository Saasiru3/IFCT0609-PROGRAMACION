#include<stdio.h>
/* Introducir funcion principal*/
int main(){
/*Definir variables*/
int cantidadCocacola, cantidadFanta, cantidadLimon;
float PrecioCocacola, PrecioFanta, PrecioLimon;
float totalCocacola, totalFanta, totalLimon;

/* Pedir los datos por teclado, con la función printf*/
/*leer llamando a la funcion scanf*/
printf ("Introducir cantidad de cocacola: ");
scanf("%d", &cantidadCocacola);
printf ("Introducir el precio de la cocacola: ");
scanf("%f",&PrecioCocacola);

printf("Introducir cantidad de fanta: ");
scanf("%d", &cantidadFanta);
printf("Introducir el precio de la fanta: ");
scanf("%f", &PrecioFanta);

printf("Introducir cantidad de Limon: ");
scanf("%d", &cantidadLimon);
printf("Introducir el precio de Limon: ");
scanf("%f", &PrecioLimon);

/*Realizar los calculos*/
totalCocacola = cantidadCocacola * PrecioCocacola;
totalFanta = cantidadFanta * PrecioFanta;
totalLimon = cantidadLimon * PrecioLimon;
/*Mostrar informe*/
printf("El Informe de ventas es: \n");
printf("Producto\tCantidad\tPrecio \tTotal\n");
printf("Cocacola\t%d      \t%.2f   \t%.2f\n",cantidadCocacola, PrecioCocacola, totalCocacola);
printf("Fanta   \t%d      \t%.2f   \t%.2f\n",cantidadFanta,PrecioFanta,totalFanta);
printf("Limon   \t%d      \t%.2f   \t%.2f\n",cantidadLimon,PrecioLimon,totalLimon);
return 0;
}

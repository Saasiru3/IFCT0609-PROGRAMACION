/*Una compañia de refrescos comercializa tres productos: cocacola, naraja y limmon.*/
/*Se desea realizar un programa que calcule las ventas realizadas de cada porducto. */
/*Para ello se leerá la cantidad vendida (maximo5000000)y el precio en euros de cada productos*/
/*y se mostrá un informe de ventas, Producto,Ventas, Precio, Total*/

#include <stdio.h>/*Que es la biblioteca standar de entrada y salida*/
                /*printf , scanf, puts y gets*/
int main() {/* es la declaracion de la funcion principal*/ /*int devolvera valor entero*/

int cocacola,naranja, limon; /*definir tipo variable, int, float, char*/
int cantidadcocacola,cantidadnaranja, cantidadlimon;
float Preciococacola, Precionaranja, Preciolimon;    /*definimos tipo de variable flotante para decimales*/
float Totalcocacola, Totalnaranja,Totallimon,Total;


    printf ("introduce cantidad cocacola: ");
    scanf ("%d", &cantidadcocacola);
    printf ("Introduce el precio de la cocacola: ");
    scanf ("%f", &Preciococacola);

    printf ("introduce cantidad naranja: ");
    scanf ("%d", &cantidadnaranja);                          /*pedir los datos al medio*/
    printf ("Introduce el precio de la naranja: ");
    scanf ("%f", &Precionaranja);

    printf ("introduce cantidad limon: ");
    scanf ("%d", &cantidadlimon);
    printf ("Introduce el precio del limon: ");
    scanf ("%f", &Preciolimon);

    Totalcocacola = Preciococacola * cantidadcocacola;
    Totalnaranja = Precionaranja * cantidadnaranja;                /*realizamos las /*Operaciones +, -, *, /, % (modulo), ==, etc*/
    Totallimon = Preciolimon * cantidadlimon;
    Total=Totalcocacola + Totalnaranja + Totallimon;
    /*Mostramos los resultado al medio*/
    printf("El Informe de Ventas es: \n");
    printf("producto \t ventas\t Precio\t Total\n");
    printf ("cocacola    \t%d     \t%f     \t%f\n", cantidadcocacola,Preciococacola,Totalcocacola);
    printf ("naranja     \t%d     \t%f     \t%f\n", cantidadnaranja,Precionaranja,Totalnaranja);
    printf ("limon       \t%d     \t%f     \t%f\n", cantidadlimon,Preciolimon, Totallimon);
    printf ("            \t       \t       \t%f\n",Total);

    return 0;
}

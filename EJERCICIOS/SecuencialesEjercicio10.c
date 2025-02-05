/*la franquicia de tiendas de ropa Raza no ha pedido que realicemos un programa,
par su terminal puto de venta. El programa deberá solicitar el código del código,
(maximo 6 cifras) a vender, su precio en euros. la cantidad de artículos que se,
desean y el descuento a aplicar (en tanto por ciento) sobre el precio inicial.
Con esos datos, el progama debe mostrar por pantalla un ticket como el que sigue:
Raza,codigo producto, cantidad, descuento 16% IVA, TOTAL.*/

#include<stdio.h>
int main(){
    char codigo;
    int cantidad;
    float descuento;
    float IVA, preciototal,descuentototal, precioCondescuento, precioUnidad, TotalApagar;

    printf ("Ingrese el codigo articulo: ");
    scanf ("%6s", &codigo);

    printf ("Ingrese el precio Unidad: ");
    scanf ("%f", &precioUnidad);
    
    printf ("Ingrese la cantidad de articulos");
    scanf("%d", &cantidad);

    printf ("Ingrese el descuento a aplicar: ");
    scanf ("%f",&IVA);

    /*Calcular los datos*/
    preciototal= precioUnidad*cantidad;
    descuentototal = preciototal* (IVA /100);
    precioCondescuento=preciototal-descuentototal;

    printf ("El Total a pagar es: %.2f",precioCondescuento);
    return 0;
                                
}

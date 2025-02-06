/*la franquicia de tiendas de ropa Raza no ha pedido que realicemos un programa,
par su terminal puto de venta. El programa deberá solicitar el código del código,
(maximo 6 cifras) a vender, su precio en euros. la cantidad de artículos que se,
desean y el descuento a aplicar (en tanto por ciento) sobre el precio inicial.
Con esos datos, el progama debe mostrar por pantalla un ticket como el que sigue:
Raza,codigo producto, cantidad, descuento 16% IVA, TOTAL.*/

#include<stdio.h>
int main(){
    char codigo;
    int cantidad,IVA
    float descuento,precioCondescuento, precioUnidad,Total

    printf ("Ingrese el codigo articulo: ");
    scanf ("%d", &codigo);

    printf ("Ingrese el precio Unidad: ");
    scanf ("%f",&precioUnidad);
    
    printf ("Ingrese la cantidad de articulos")
    scanf("%d", &cantidad);

    printf ("Ingrese el descuento a plicar: ");
    scanf ("%d",&IVA);

    /*Calcular los datos*/

    precioCondescuento= (precioUnidad*IVA)/100;
    Total=precioCondescuento*cantidad

    printf ("El Total a pagar es: "; Total)
    return 0;
                                
}

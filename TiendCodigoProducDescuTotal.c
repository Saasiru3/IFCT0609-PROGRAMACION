#include<stdio.h>
int main(){
    int cantidad, porcentaje;
    float precioarticulo,descuento,preciofinal;
    
    printf ("Ingrese la cantidad de articulos\n");
    scanf ("%d",&cantidad);
    
    printf ("Ingrese el precio del articulo\n");
    scanf ("%f",&precioarticulo);

    printf ("Ingrese el porcentaje de descuento\n");
    scanf ("%d",&porcentaje);
    
    /*realizo las operaciones*/
    descuento=(precioarticulo*porcentaje)/100;
    preciofinal=precioarticulo-descuento;

    /*mostramos los resultados*/
    printf ("el precio final es: %.2f\n", preciofinal);
    return 0;
}
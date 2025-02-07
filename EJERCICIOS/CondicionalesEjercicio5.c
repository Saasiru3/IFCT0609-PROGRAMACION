/*Escribir un program que, dados los lados de un triangulo a,b,c indique,
si es equilatero ,isosceles o escaleno y calcule su area,
con la formula Herón*/
#include<stdio.h>       /*incluimos a la biblioteca standar de entrada y salida*/
#include<math.h>        /*bliblioteca matematica operaciones complejas raices cuadradas,etc*/
int main () {           /*Declaramo la funcion principal*//*int devovera un entero*/

    double a=0, b=0, c=0, p=0, area=0;      /*Utilizamos la variable double 8 bits, mayor precision que float*/

    printf ("Introduce lado a, b, c: \n");  /*Solicitamos los datos*/
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &c);

    if (a == b && b == c) {                     /*Invocamos la función if, donde se cumple una condicion hay una sentencia*/
        printf("El triangulo es Equilatero\n");
    } else if (a == b || b == c || a == c) {
        printf ("El triangulo es Isóceles\n");
    } else {
        printf ("El triangulo es Escaleno \n");
    }

    p = (a + b + c) / 2;  /* Calculamos el semiperímetro */
    area = sqrt(p * (p - a) * (p - b) * (p - c));  /* Calculamos el área usando la fórmula de Herón*/
    
                                            /*Mostramos los resultados*/
    printf ("El area del triangulo es: %.2lf\n", area);

    return 0;
}
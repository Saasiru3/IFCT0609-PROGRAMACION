#include<stdio.h>
int main ()
{
    int num1, num2;
    num1=0;
    num2=0;
    /*pedir los datos al medio*/
    printf ("Ingrese el primer numero: ");
    scanf ("%d", &num1);
    printf ("Ingrese el segundo numero: ");
    scanf ("%d", &num2);
    /*introducir condicional*/
    if (num1>num2)
    {
        printf ("el numero mayor es: %d\n", num1);
        }
        else 
        {
            printf (" el numero mayor es: %d\n", num2);
            }
    
    return 0;
}

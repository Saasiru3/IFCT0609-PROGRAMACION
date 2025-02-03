#include<stdio.h>
int main()
{   int num1, num2, suma, resta, multiplicacion, 
    float division;
        printf("Introduce el primer numero: ");
        scanf("%d", &num1);
        printf("Introduce el segundo numero: ");
        scanf ("%d", &num2);
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion= num1 * num2;
    division= num1 / num2;

    if (num1>num2)
    {
        printf("La suma es: %d\n", suma);
        printf("la resta es: %d\n", resta);
    }
    else
    { 
        printf ("la multiplicacion es %d\n", multiplicacion);
        printf ("la division es %f\n", division);
    }
    return 0;
}

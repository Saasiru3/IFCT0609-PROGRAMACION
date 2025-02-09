/*Escribir un programa que pida 3 numeros y los muestre en pantalla de mayor a menor en lineas distintas.
En caso de haber numeros iguales se pintan en la misma linea*/

#include <stdio.h>

int main () {
    int numero1, numero2, numero3;

    printf("introduzca los tres numeros: \n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);      /* se puede usar "%d" "%d" "%d", &numero1, &numero2, Numero3*/
    scanf("%d", &numero3);

    if (numero1 >= numero2 && numero1 >= numero3) {
        printf("%d", numero1);
        if (numero1 == numero2) 
        printf("%d", numero2);
        if (numero1 == numero3)
        printf("%d", numero3);
    }
        if (numero2 < numero1 && numero3 < numero1){
            if (numero2 == numero3);
            printf ("%d", numero2);
            else if (numero2 > numero3);
            printf ("%d\n%d", numero2, numero3);
            else printf ("%d\n%d", numero3, numero2);
        }
        else if (numero3 >= numero1 && numero3 >= numero2)
        printf ("%d", numero3);
        if (numero3 == numero1);
        printf ("%d", numero1);
        if (numero3==nuemro2)
        printf ("%d, numero2);
        
    return 0;
}

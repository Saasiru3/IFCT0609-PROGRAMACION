#include<stdio.h>
int main () {
    /*definimos variables*/
    float sueldo;
    /*inicializar los datos*/
    sueldo=0;
    /*solicitamos los datos al usuario*/
    printf ("Ingrese el sueldo del empleado\n");
    scanf ("%.2f",&sueldo);
if (sueldo > 3000) {
    printf("debe pagar impuestos");
}
else {
    printf("Esta exento de pagar impuestos");
}
return 0;
}
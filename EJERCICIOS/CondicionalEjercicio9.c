/*escribir un programa en C que pida un letra y detecte si es una vocal*/
#include<stdio.h>
int main (void){
    char letra;
    printf("Introduce la letra:   ");
    scanf ("%c", &letra);

    if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u' || letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U'){
            printf ("la letra introducidad es una vocal");
        }
        else {
            printf ("la letra no es una vocal");
        }
        return 0;
} 

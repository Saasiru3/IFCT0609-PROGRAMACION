#include<stdio.h>
int main () {
    char letra;
    printf ("introduzca letra: ");
    scanf(" %c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf ("la letra es vocal");
    } else {
        printf ("la letra es una consonante");
    }
    return 0;
}
       

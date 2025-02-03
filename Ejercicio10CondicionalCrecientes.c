/* escribir un programa en C que pita tres numeros*/
/* y detecte si se han introducido en orden creciente*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf ("Ingrese los tres numeros:");
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    if(a<b && b<c){
        printf("los numeros estan en orden creciente.");
    }else{
        printf ("los numeros NO estan en orden creciente.");
    }
    return 0;
}

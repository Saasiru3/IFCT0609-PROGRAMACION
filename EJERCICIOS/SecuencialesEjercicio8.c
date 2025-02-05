/*En un Campamento de Atletismo se miden las marcas de los corredores de las distintas categorias
 en segundos porque resultan mas apropiados para almacenralos en un soport informático.
 sin embargo, resulta muy incomodo para los aficionados leer las marcas en segundos.Por esta razón. 
 se desea un programa que lea un tiemp expresado en segundos y muestre su equivalencia en horas, minutos,segundos*/

 #include<stdio.h>               /*Que es la biblioteca standar de entrada y salida*/
                                 /*printf , scanf, puts y gets*/

int main () {                    /* es la declaracion de la funcion principal*/ /*int devolvera valor entero*/

int horas, minutos, segundos;    /*definir tipo variable, int, float, char*/
int Totalsegundos;              

horas=0, minutos=0, segundos=0, Totalsegundos=0;      

printf("Introduce el tiempo total en segundos: ");
scanf ("%d",&Totalsegundos);

horas = Totalsegundos/3600;            /*1hora= 3600segundos*/
minutos = (Totalsegundos % 3600) / 60;   /*1minutos=60segundos*/
segundos = Totalsegundos % 60;         /*segundos*/

printf ("Las horas son: %d horas", horas);
printf ("El tiempo en: %d minutos", minutos);
printf ("El tiempo en: %d segundos", segundos);

return 0;

}

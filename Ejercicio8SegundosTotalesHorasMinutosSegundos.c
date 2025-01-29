#include<stdio.h>
/*definimos funcion principal*/
int main(){
/*definimos las variables*/
int horas, minutos, segundos, SegundosTotales;
/*solicitamos los datos por teclado, llamando a la función printf*/
printf("Introduce los SegundosTotales: ");
/*leemos los datos con la función scanf*/
scanf ("%d", &SegundosTotales);
/*realizamos las operaciones*/
horas= SegundosTotales / 3600;
minutos= (SegundosTotales % 3600) / 60;
segundos= SegundosTotales % 60;
/*mostramos el resultado al ambiente, con la funcion printf*/
printf ("Las horas son: %d \n",  horas); 
printf ("los minutos son: %d \n",  minutos);
printf ("los segundos son: %d \n",  segundos);
/*devolver valor*/
return 0;
}

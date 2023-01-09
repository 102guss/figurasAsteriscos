//piramide completa de asteriscos
#include<stdio.h>
int main(){
int i,j,numero;//supongamos que numero = 4
printf("Itroduce el numero de filas de la  piramide: ");
scanf("%d",&numero);
	
for(i=1; i<=numero;i++)
{
	 for(j=1;j<=numero-i;j++)
	 printf(" ");
	 for(j=1;j<=2*i-1;j++)
	 printf("*");
	 printf("\n");
}	
	
}//fin del método main
//este está interesante; practicar prueba de scritorio
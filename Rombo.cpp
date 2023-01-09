//rombo de asteriscos

#include<stdio.h>
int main(){
int i,k,n;//supongamos que numero = 4
printf("Itroduce el numero de filas del rombo:  ");
scanf("%d",&n);

for(int i=0; i<=n;i++){
	
	for(int k=n-i; k>0;k--){
		printf(" ");
	}
	for(int k=0; k<i;k++){
		printf(" *");
	}
	printf(" ");//aqui solo es un espacio
	printf("\n");
	
}


for(int i=0; i<=n;i++)
{
	
		for(int k=0;k<=i;k++)
		{
		
		printf(" ");
    	}
		for(int k=n-i-1;k>0;k--)
		{
			printf(" *");//aqui es un espacio y un asterisco
			
		}
		printf(" ");
		printf("\n");

}


}//fin del método main

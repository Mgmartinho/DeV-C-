#include <stdio.h>
#include <math.h>

float a,b,c,x1,x2,delta,result,raiz;///variaveis

int main(){
printf("digite o valor de 'A'\n");
scanf("%f",&a);
	
printf("digite o valor de 'B'\n");
scanf("%f",&b);	
printf("digite o valor de 'C'\n");
scanf("%f",&c);	

if(a==0){
	printf("VALOR INVALIDO, ESCREVA NOVAMENTE\n");
	scanf("%f",&a);
}

delta=((b*b) - (4*(a*c)));

	
if(delta<0){
	printf("Nao exite raiz real, X1=0 E X2=0");
}	
	else if (delta==0){
		x1 =((-b)+sqrt(delta))/(2*a);
		printf("X1= %.2f, X2=0",x1);	
	}
		else{
		x1 =((-b)+sqrt(delta))/(2*a);
		x2 =((-b)-sqrt(delta))/(2*a);
			printf("X1= %.2f , X2= %.2f",x1,x2);
		
}
}////int main

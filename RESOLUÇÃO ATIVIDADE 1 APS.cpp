#include<stdio.h>

int age,ano,mes,dia;
int main(){
	
printf("Digite sua idade em dias\n");
scanf("%d",&age);

ano=age/365;	
mes=(age%365)/30;
dia=(age%365)%30;	
	
printf("\nIDADE DIGITADA EM DIAS: %d\n",age);
printf("\nIDADE EM ANO %d\n",ano);
printf("\nMESES: %d\n",mes);
printf("\nDIAS: %d\n",dia);

return 0;	
}

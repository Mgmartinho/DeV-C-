# Dec-C-
atividades Logica Programação Dev C++
#include<stdio.h>
float sal,imp,inss;

int main(){
	
printf("DIGITE O VALOR DO SEU SALARIO\n");
scanf("%f",&sal);

if(sal<=1000){
	inss=sal-(sal*0.05);
	printf("\n**************\n");
	printf("o Salario com Desconto do INSS de 5 Porcento e: R$%.2f\n",inss);
}	
else{
	imp=sal-(sal*0.10)-(sal*0.05);
	
	printf("o Salario com Desconto do INSS de 5 porcento + 10 porcento de Imposto e: R$%.2f\n",imp);
}	
	
return 0;	
}

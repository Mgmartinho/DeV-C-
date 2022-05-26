#include<stdio.h>

int i,cont;
double alt;

int main(){
	
for(i=0;i<3;i++){	/////////contador nunca se imprime dentro do laço
printf("DIGITE SUA ALTURA\n");
scanf("%lf",&alt);


if(alt>1.60){
   cont++;

}///if
}///for  

  
 printf("\no numero de pessoas com altura maior a 1.60 e QTD: %d\n",cont); 
  
return 0; 	


	
}//int main

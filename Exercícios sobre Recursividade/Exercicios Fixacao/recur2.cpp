#include<stdio.h>

int numero;

void entrada(){
	
	printf("Digite um valor:");
	scanf("%i",&numero);
	
}

int calcula(int v){
	
	if(v <= 0 || v == 1)
	   return 0;
	   
	else if(v==2)
	   return 1;
	else
	   return ((v-1)+(v-2)+(v-3)) + calcula(v-1);
	
}

main(){
	
	int resultado=0;
	entrada();
	
	   printf("O valor de tribonacci e %i",calcula(numero));
	
}

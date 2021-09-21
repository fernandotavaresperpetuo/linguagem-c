#include<stdio.h>

int numero;

void entrada(){
	
	printf("Digite um valor:");
	scanf("%i",&numero);
	
}

int calcula(int v){
	
	if(v == 0)
	   return 0;
	else
	   return v + calcula(v-1);
	
}

main(){
	
	entrada();
	printf("O valor da soma entre de 1 ate %i e %i",numero, calcula(numero));
	
}

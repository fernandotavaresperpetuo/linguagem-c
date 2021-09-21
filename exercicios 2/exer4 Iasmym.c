#include<stdio.h>
#include<string.h>

int main(){
	int i, quantStr1, quantStr2, cont=0;
	char fixa[20], compare[20];
	printf("insira uma string fixa:");
	scanf("%[^\n]s", &fixa);
	getchar();
	printf("insira uma string para comparar:");
	scanf("%[^\n]s", &compare);
	getchar();
	quantStr1= strlen(fixa);
	quantStr2= strlen(compare);
	//printf(">> %d fixa, >> %d compare", quantStr1, quantStr2);
	for(i=0;i<quantStr1;i++){
		if(fixa[i]==compare[i]) cont++;
		//printf("\n>> %d cont", cont);
	}
	if((quantStr1==quantStr2)&&(cont==quantStr2)) printf("\nAs strings sao iguais.");
	else printf("\nAs strings sao diferentes.");
	
	return 0;
}

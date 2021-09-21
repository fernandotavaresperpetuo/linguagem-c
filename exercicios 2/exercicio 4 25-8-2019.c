/* 	4- Utilizando os conceitos estudados sobre String na Linguagem C crie um programa
	que: Faça um programa que receba do usuário uma string. O programa imprime a string
	sem suas vogais.   */
#include<stdio.h>

int main(){
	int i;
	char str[50];
	
	printf("Digite uma frase: ");
	scanf("%[^\n]s", &str);
	printf("a frase sem vogais fica:\n\t");
	for(i=0; i<sizeof(str); i++){
		if      (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') continue;
		else if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') continue;
		else if (str[i]=='\0') break;
		printf("%c", str[i]);
	}
	return 0;
}

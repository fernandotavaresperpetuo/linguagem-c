#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

//constantes
#define anoFake 365
#define mesFake 12
//variaveis globais
int d, m, a, d_a, dia, mes, ano;
//prototipo de procedimento sem parametros
void titulo();
void solucaoA();
//prototipo de procedimento com parametros
void solucaoB(int dd, int mm, int aa);
void subTitulo(bool a, bool b, bool c, bool d);
//prototipo de função sem parametros
int tempo();
int solucaoC();
//prototipo de função com parametros
bool solucaoD(int x);

int main(){
	int recebe_idade;
	bool anoNasc, anoAtual;
	tempo();
	titulo();
	subTitulo(true, false, false, false);
	solucaoA();
	subTitulo(false, true, false, false);
	solucaoB( d, m, a);
	subTitulo(false, false, true, false);
	puts("\n");
	recebe_idade= solucaoC();
	printf(" ! Nossa voce ja tem %d anos\n\n", recebe_idade);
	subTitulo(false, false, false, true);
	anoNasc= solucaoD(ano);
	anoAtual= solucaoD(a);
	if(anoNasc==true) printf("O ano em que nasceu era bissexto\n");
	else printf("O ano em que nasceu nao era bissexto\n");
	if(anoAtual==true) printf("O ano atual e bissexto\n");
	else printf("O ano atual nao e bissexto\n"); 
	return 0;
}
void titulo(){
	printf(	"4- Exercicios sobre funçao e procedimento com e sem passagem de parametros:\n"
			"A partir do seguinte problema: Faça um algoritmo que leia a idade de uma pessoa\n"
			"expressa em anos, meses e dias e mostre-a expressa apenas em dias.\n\n");
}
void subTitulo(bool a, bool b, bool c, bool d){
	a==true? printf("a) Desenvolva procedimento sem passagem de parametro para o problema proposto:\n\n"):0;
	b==true? printf("b) Desenvolva procedimento com passagem de parametro para o problema proposto:\n\n"):0;
	c==true? printf("c) Desenvolva funçao sem passagem de parametro para o problema proposto:\n\n"):0;
	d==true? printf("d) Desenvolva funçao com passagem de parametro para o problema proposto:\n\n"):0;
}
void solucaoA(){
	printf("Digite sua data de nascimento\n\n");
	printf("dia:");	
	scanf("%d", &dia);
	printf("mes:");
	scanf("%d", &mes);		
	printf("ano:");	
	scanf("%d", &ano);
	printf("Nasceu em %d/%d/%d\n\n", dia, mes, ano);
	printf("data atual: %d/%d/%d\n", d, m, a);
}
void solucaoB(int dd, int mm, int aa){
	int idade;
	idade= aa-ano;
	printf("\nvoce tem %d anos", idade);
	printf("\nvoce viveu %d meses", idade*mesFake);
	printf("\ntem aproximadamente %d dias\n\n", idade*anoFake);
}
int solucaoC(){
	return a-ano;
}
bool solucaoD(int x){
	if(x%4==0) return true;
	else return false;
}
int tempo(){
	struct tm *data_hora_atual;
	time_t segundos;
	time(&segundos);
	data_hora_atual = localtime(&segundos);
	d = data_hora_atual->tm_mday;
	m = data_hora_atual->tm_mon+1;
	a = data_hora_atual->tm_year+1900;
	d_a=data_hora_atual->tm_yday+1 ;
}

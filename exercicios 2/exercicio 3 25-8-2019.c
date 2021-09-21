#include<stdio.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
    char c, h2;
    int result;

	// isdigit ()
	/*
	A fun��o isdigit () verifica se um caractere � caractere num�rico (0-9) ou n�o.
	Fun��o Prot�tipo de isdigit ():
		
	int isdigit (int arg);
	A fun��o isdigit () aceita um �nico argumento na forma de um inteiro e retorna o valor do tipo int.	Mesmo assim,
	isdigit () aceita um inteiro como argumento, o caractere � passado para a fun��o. Internamente, o caractere �
	convertido em seu valor ASCII para a verifica��o.	
	C isdigit () Valor de retorno
	Valor de retorno						Observa��es
	Inteiro diferente de zero (x> 0)		Argumento � um caractere num�rico.
	Zero (0)								Argumento n�o � um caractere num�rico.  */
	
	fflush(stdin);
	puts("ex.:1 isdigit()\n");	
    c='5';
    printf("Resultado quando passado um numero como caracter: %d", isdigit(c));
    c='+';
    printf("\nResultado quando passado um n�o-numero como caracter: %d", isdigit(c));
    puts("\n\n");
    
    return 0;
}

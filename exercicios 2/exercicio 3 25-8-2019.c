#include<stdio.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
    char c, h2;
    int result;

	// isdigit ()
	/*
	A função isdigit () verifica se um caractere é caractere numérico (0-9) ou não.
	Função Protótipo de isdigit ():
		
	int isdigit (int arg);
	A função isdigit () aceita um único argumento na forma de um inteiro e retorna o valor do tipo int.	Mesmo assim,
	isdigit () aceita um inteiro como argumento, o caractere é passado para a função. Internamente, o caractere é
	convertido em seu valor ASCII para a verificação.	
	C isdigit () Valor de retorno
	Valor de retorno						Observações
	Inteiro diferente de zero (x> 0)		Argumento é um caractere numérico.
	Zero (0)								Argumento não é um caractere numérico.  */
	
	fflush(stdin);
	puts("ex.:1 isdigit()\n");	
    c='5';
    printf("Resultado quando passado um numero como caracter: %d", isdigit(c));
    c='+';
    printf("\nResultado quando passado um não-numero como caracter: %d", isdigit(c));
    puts("\n\n");
    
    return 0;
}

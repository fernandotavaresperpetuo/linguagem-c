#include <stdio.h>
FILE *arq;
char nome[53];

void menu(){
    printf("Menu\n");
    printf("1-Criar arquivo\n");
    printf("2-Cadastrar Registro\n");
    printf("3-Exibir Registros\n");
    printf("4-Fim do Programa\n\n");
}
void criarArquivo(){
    arq = fopen("registro.txt","a");
    fclose(arq);
}

void CadastrarRegistro(){
	arq = fopen("registro.txt","w");
	printf("Digite o nome: ");
	fflush(stdin);
	fgets(nome, 53, stdin);

	fprintf(arq, "%s", nome);
	fclose(arq);
}

void Exibir(){
   arq = fopen("registro.txt","r");
	fscanf(arq, "%s", nome);
	printf("Palavra = %s \n\n", nome);
	fclose(arq);
}


int main(){
    int op;
    while (op != 4){
    menu();
    printf("Digite a opcao desejada\n");
    scanf("%d",&op);
    printf("\n");
        switch (op){
        case 1:criarArquivo();
            break;
        case 2:CadastrarRegistro();

            break;
        case 3:Exibir();
            break;

        case 4:printf("Saindo...");
            break;

        default:printf("Codigo invalido");
            break;
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

struct Cadastro{
    char nome [51];
    char endereco[51];
    int telefone;
};
struct Cadastro cad[10];
int i;

void menu(){

    printf("Menu\n");
    printf("1-Cadastrar 10 registros\n");
    printf("2-Pesquisar nome\n");
    printf("3-Listar todos os registros\n");
    printf("4-Sair\n\n");
}

void Cadastrar(){

    for(i=0;i<10;i++){
        printf("Digite o nome:");
        fflush(stdin);
        fgets(cad[i].nome,51,stdin);
        printf("Digite o endereco:");
        fflush(stdin);
        fgets(cad[i].endereco,51,stdin);
        printf("Digite o telefone:");
        scanf("%i",&cad[i].telefone);
    }
}

void Pesquisar(){
    char pesquisa[21];
    char aux[21];

    printf("Digite um nome para ser pesquisado:\n");
    fflush(stdin);
    //scanf("%[^\n]s",&pesquisa);
    fgets(pesquisa,21,stdin);
    for(i=0;i<10;i++){
        if(strcmp(cad[i].nome,pesquisa)==0){
            strcpy(aux,cad[i].nome);
            printf("Na posicao %i aparece o nome %s",i+1,aux);
            printf("Endereco:%s",cad[i].endereco);
            printf("Telefone:%i\n",cad[i].telefone);
        }
    }
}

void listar(){

    for(i=0;i<10;i++){
        printf("Nome do %i registro:%s",i+1,cad[i].nome);
        printf("Endereco:%s",cad[i].endereco);
        printf("Telefone:%i\n\n",cad[i].telefone);
    }
}

int main(){
    int op=0;
    menu();
    do{
        printf("Digite um numero para prosseguir:");
        scanf("%i",&op);
        printf("\n");
        switch(op){
            case 1: Cadastrar(); break;
            case 2: Pesquisar(); break;
            case 3: listar(); break;
            case 4:printf("Saindo ...\n"); break;
            default : printf("Numero invalido\n"); break;
        }
    }while (op!= 4);
    return 0;
}

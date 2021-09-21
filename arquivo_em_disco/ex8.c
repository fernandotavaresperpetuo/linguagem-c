#include <stdio.h>
#include <stdlib.h>
int numeromaior=9999;
int numeromenor=9999;
char nomealto[15],nomeidade[15];
typedef struct cadastra cad;
struct cadastra{
    char nome[15];
    char esporte[15];
    int idade;
    float altura;
};
void menu(){
    system("cls");
    printf("\n1--nome");
    printf("\n2--esporte");
    printf("\n3--idade");
    printf("\n4--altura");
}
int main()
{
    exibir();
    cadastrar();

    return 0;
}
void cadastrar()
{
    FILE *arquivo;
    cad ctt;
    arquivo = fopen("criar.txt","ab");
    if(arquivo== NULL){
        printf("erro\n");
    }
    else{
            for(int i=0;i<5;i++){
            fflush(stdin);
            printf("Digite o nome: ");
            gets(ctt.nome);

            fflush(stdin);
            printf("Digite o esporte: ");
            gets(ctt.esporte);

            fflush(stdin);
            printf("Digite a idade: ");
            scanf("%d",&ctt.idade);

            fflush(stdin);
            printf("Digite altura: ");
            scanf("%f",&ctt.altura);


            fwrite(&ctt, sizeof(cad),1,arquivo);

            }
            fclose(arquivo);
}
}
void exibir(){
    FILE *arquivo;
    cad ctt;
    arquivo = fopen("criar.txt","rb");
    if(arquivo== NULL){
        printf("erro\n");
    }
    else{
        while( fread(&ctt, sizeof(cad),1,arquivo)==1){
        printf("Nome %s\n",ctt.nome);
        printf("esporte %s\n",ctt.esporte);
        printf("idade %d\n",ctt.idade);
        printf("altura %.2f\n",ctt.altura);
        printf("\n--------------------\n\n");
        if(ctt.altura<numeromaior){
                    numeromaior=ctt.altura;
                    nomealto[15]=ctt.nome;
                }
        if(ctt.idade<numeromenor){
                    numeromenor=ctt.idade;
                    nomeidade[15]=ctt.idade;
                }
    }
    printf("Nome mais alto %s\n",nomealto);
    printf("Nome mais velho %s\n",nomeidade);
    getch();
    fclose(arquivo);
    }
}

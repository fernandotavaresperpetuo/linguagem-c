#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

typedef struct {

    char aval1[20];
    char aval2[20];
    char aval3[20];
    char aval4[20];

    char receb_aval[20];


    char a[20];

    char nome[30];

    char numeromatricula[3];

    float media;

    float n1;
    float n2;
    float n3;

    int matricula;

}aluno;

int main()
{
    aluno alu;

    /*printf("Digite seu nome: ");
    fflush(stdin);
    gets(p.nome);

    printf("Digite sua idade: ");
    scanf("%d", &p.idade);

    FILE *f = fopen("pessoas.bin", "ab");

    fwrite(&p, sizeof(Pessoa), 1, f);

    fclose(f);*/

    FILE *f = fopen("alunos.bin", "rb");

    if (!f) {
        printf("Erro ao tentar ler o arquivo.\n");
        exit(1);
    }
        printf("Matricula\tNome\t\t\tMedia\t\t\tObservacao\n\n\n\n");

    while(fread(&alu, sizeof(aluno), 1, f))
        {
        printf("%s\t\t%s            \t%.1f\t\t\t%s\t\n", alu.numeromatricula, alu.nome, alu.media, alu.receb_aval);
    }

    fclose(f);

    return 0;
}

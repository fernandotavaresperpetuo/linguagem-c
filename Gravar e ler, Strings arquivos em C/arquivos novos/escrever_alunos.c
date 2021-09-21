#include <stdlib.h>
#include <stdio.h>
typedef struct{
     float media;
     char nome[30];
     int matricula[3];
     float n1;
     float n2;
     float n3;
}aluno;

int main(){

        aluno alu;

        printf("Matricula aluno : \n");
        scanf("%d", &alu.matricula);

        printf("Digite o nome do aluno: \n");
        fflush(stdin);
        gets(alu.nome);

        printf("Digite a Primeira do Nota do Aluno: \n");
        scanf("%f", &alu.n1);

        printf("Digite a Segunda do Nota do Aluno: \n");
        scanf("%f", &alu.n2);

        printf("Digite a Terceira do Nota do Aluno: \n");
        scanf("%f", &alu.n3);


        FILE *f = fopen("alunos.bin", "ab");

        fwrite(&alu, sizeof(aluno), 1, f);

        fclose(f);

        return 0;
}

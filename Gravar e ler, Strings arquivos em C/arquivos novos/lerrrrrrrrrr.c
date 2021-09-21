#include <stdlib.h>
#include <stdio.h>
typedef struct{

     char nome[30];
     int matricula[3];
     float n1;
     float n2;
     float n3;
}aluno;

int main()
{
    aluno alu;

    FILE *f = fopen("alunos.bin", "rb");

    if (!f) {
        printf("Erro ao tentar ler o arquivo.\n");
        exit(1);
    }

    while(fread(&alu, sizeof(aluno), 1, f))
        {
        printf("Olá %2.f, você tem %2.f anos.\n", alu.n2, alu.n1);

        alu.media = alu.n1 + alu.n2 +alu.n3 / 3;

        printf(" %f  ", alu.media);
    }



    fclose(f);



    return 0;
}

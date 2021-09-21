#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

typedef struct{

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

int main(){

    aluno alu;

    strcpy(alu.aval1, "Excelente");
    strcpy(alu.aval2, "Bom");
    strcpy(alu.aval3, "Preocupante");
    strcpy(alu.aval4, "Tente de Novo");










   // printf("%s", alu.aval1);


/*    char aval1= "Excelente";
    char aval2= "Bom";
    char aval3= "Preocupante";
    char aval4= "Tente de Novo";*/


    int i;

        for(i=0;i<50;i++)
        {

            do
            {
            printf("\nDitige o numero da Matricula do aluno no formato 001,\n");
            printf("Se voce digitar numeros menores que 0 ou maior\n");
            printf("que 50, o programa retornara ao numero da \n");
            printf("matricula do aluno.");

            printf("\n\nDitige o numero da Matricula do aluno : \t");
            fflush(stdin);
            gets(alu.numeromatricula);

            //printf("\n\nnumero maatricula : eh %s \n", nome);

            alu.matricula = atoi(alu.numeromatricula); //Convertemos nome para inteiro,
                           //e seu valor vai para matricula

            //printf("matricula em inteiro: %d \n", matricula);

            //sprintf(nome,"%d", matricula);

            //printf("nnumero matricula : eh %s \n", nome);

            //printf("\n\nnumero maatricula : eh %s \t", nome[1]);

            //scanf("%d", &matriculaa);

            //matriculaa = strlen (nome);

            //sprintf(nome,"%d", matricula);

            //printf("\n\nnumero maatricula : eh %d \t", matricula);

            }while (alu.matricula < 1 || alu.matricula > 50);

            //printf("\n\nnumero maatricula : eh %d \n", matricula);




            //printf("\n\nnumero maatricula : eh %s \t", numeromatricula);




            printf("\nDigite o nome do aluno: \n\n");
            fflush(stdin);
            gets(alu.nome);


            do
            {
            printf("\nDitige a primeira nota do aluno,\n");
            printf("Se voce digitar numeros menores que 0, ou maior \n");
            printf("que 10, o programa retornara a primeira nota do aluno.\n");

            printf("\nDigite a Primeira do Nota do Aluno: \n\n");
            scanf("%f", &alu.n1);

            }while (alu.n1 < 0 || alu.n1 > 10);


            do
            {
            printf("\nDitige a Segunda nota do aluno,\n");
            printf("Se voce digitar numeros menores que 0, ou maior \n");
            printf("que 10, o programa retornara a Segunda nota do aluno.\n");

            printf("\nDigite a Segunda do Nota do Aluno: \n\n");
            scanf("%f", &alu.n2);

            }while (alu.n2 < 0 || alu.n2 > 10);


            do
            {
            printf("\nDitige a Terceira nota do aluno,\n");
            printf("Se voce digitar numeros menores que 0, ou maior \n");
            printf("que 10, o programa retornara a Terceira nota do aluno.\n");

            printf("\nDigite a Terceira do Nota do Aluno: \n\n");
            scanf("%f", &alu.n3);

            }while (alu.n3 < 0 || alu.n3 > 10);


            alu.media = ((alu.n1+alu.n2+alu.n3)/3);

            //printf("\nA media %.1f \n\n", alu.media);


            if(alu.media >= 8.5 && alu.media <= 10.0)
                {
                    //alu.numeromatricula;
                    //alu.nome;
                    //alu.media;
                    strcpy(alu.a, alu.aval1);
                }
                else
                {
                    if(alu.media >= 7.0 && alu.media <= 8.4)
                    {
                        strcpy(alu.a, alu.aval2);
                        //alu.numeromatricula;
                        //alu.nome;
                        //alu.media;

                    }
                    else
                    {
                        if(alu.media >= 0 && alu.media < 7)
                        {
                            strcpy(alu.a, alu.aval3);
                            //alu.numeromatricula;
                            //alu.nome;
                            //alu.media;

                            /*
                            printf("\n%s\n", nome);
                            printf("\n Matricula: %s\n\n", numeromatricula);
                            printf("\nA media %.1f \n\n", media);
                            */

                        }
                        else{
                                strcpy(alu.a, alu.aval1);
                        }
                    }
                }


                strcpy(alu.receb_aval, alu.a);

                FILE *f = fopen("alunos.bin", "ab");

                fwrite(&alu, sizeof(aluno), 1, f);

                fclose(f);


                            }



        return 0;
}

    /*

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    int main(){
        char cpf[11];
    //String de tamanho 12, ou seja de 0 a 11
    // última posição reservado para \0

        int conv; //Destino do valor a ser convertido
        int i=0;
    //Tamanho da string digitada será guardada nessa variável


        printf("Digite seu CPF\n");
        gets (cpf);  //Valor digitado será armazenado

        conv=atoi(cpf); //Convertemos CPF para inteiro,
                               //e seu valor vai para conv

       printf("CPF em inteiro: %i\n",conv);

    system("pause");
     return 0;
    }  */

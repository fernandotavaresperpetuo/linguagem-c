#include <stdlib.h>
#include <stdio.h>

/*
*/
typedef struct{
     char nome[80];
     long int matricula;
     char turma[15];
     float p1;
     float p2;
     float p3;
}aluno;


void imprima(aluno alunos[60],int d){
      float total,media_total=0;
      int x,m;
      printf("Dados dos alunos Aprovados:\n\n");
      for(m=0;m<d;m++){
          total = ((alunos[m].p1 + alunos[m].p2 + alunos[m].p3)/3);
              if(total>=5){
                  printf("Matricula: %li, Nome: %s, Turma: %s\n",alunos[m].matricula,alunos[m].nome,alunos[m].turma);
                  media_total+=total;
           }
      }
      printf("A media total dos alunos aprovados é: %f.\n",media_total);
}


int main(){
    int qtde_alunos,i;
    aluno alunos[100];
    char disciplina[30];

    printf("....::::Controle de Nota das Turmas::::....\n\n");
    printf("Digite a quantidade de alunos na turma: \t");
    scanf("%d",&qtde_alunos);
    printf("Digite a Disciplina: \t");
    fflush(stdin);
    gets(disciplina);
    fflush(stdin);
    for(i=0;i<qtde_alunos;i++){
         printf("Digite o Nome do aluno %d: \t",i+1);
         gets(alunos[i].nome);
         fflush(stdin);
         printf("Digite a turma do aluno %s: \t",alunos[i].nome);
         gets(alunos[i].turma);
         fflush(stdin);
         printf("Digite a Matricula do aluno %s: \t",alunos[i].nome);
         scanf("%li",&alunos[i].matricula);
         printf("Digite a Nota da Prova 1 da Disciplina %s do Aluno %s: \t",disciplina,alunos[i].nome);
         scanf("%f",&alunos[i].p1);
         printf("Digite a Nota da Prova 2 da Disciplina %s do Aluno %s: \t",disciplina,alunos[i].nome);
         scanf("%f",&alunos[i].p2);
         printf("Digite a Nota da Prova 3 da Disciplina %s do Aluno %s: \t",disciplina,alunos[i].nome);
         scanf("%f",&alunos[i].p3);
         fflush(stdin);
    }
    for(i=0;i<qtde_alunos;i++){
        imprima(alunos,qtde_alunos);
        break;
    }

system("pause");
return 0;
}

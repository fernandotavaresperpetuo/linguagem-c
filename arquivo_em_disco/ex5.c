#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Aluno{
    char nome[100];
    int idade;
    double nota1,nota2;
}ALU;

void Inserir(ALU*alunos,int n);
void Escreve(FILE *pfile , ALU* alunos, int n);

int main(){
    FILE*fw;
    ALU*alu =NULL;
    int n;
    printf("Inserir numeros de alunos:");
    scanf("%d%*c",&n);
    alu = (ALU*)calloc (n,sizeof(ALU));

    fw=fopen("aluno.txt","w");
    Inserir(alu,n);
    Escreve(fw,alu,n);
    fclose(fw);
    free(alu);
    return 0;
}

void Escreve(FILE*pfile,ALU*alu,int n){
    int i,pos;
    for(i=0;i<n;i++){
        pos=strlen(alu[i].nome)-1;
        alu[i].nome[pos] ='/0';
        fprintf(pfile,"%s\t%d\t%1f\t%1f\t%1f\n",
        alu[i].nome,alu[i].idade,
        alu[i].nota1,alu[i].nota2,
        (alu[i].nota1+alu[i].nota2)/2);
    }
}

void Inserir(ALU*alu,int n){
    int i;
    for(i=0;i<n;i++){
        printf("Cadastro aluno %d \n" ,i+1);
        printf("Inserir nome:");
        fgets(alu[i].nome,100,stdin);
        printf("Inserir idade:");
        scanf("%d",&alu[i].idade);
        printf("Inserir duas notas:");
        scanf("%1f %1f%*c",&alu[i].nota1,&alu[i].nota2);
    }
}

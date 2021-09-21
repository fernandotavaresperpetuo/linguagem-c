#include<stdio.h>
#include<string.h>

struct cadastro{
	int matricula;
	char nome[51];
	float nota[3];
	float md;
};
struct cadastro cad[5];

int i,j;

char aux[51];
float MaiorNotaPri=0;
float MaiorMedia=0 ,MenorMedia=10;

void menu(){
	printf("Menu\n");
	printf("1-Cadastrar\n");
	printf("2-Maior nota da primeira nota\n");
	printf("3-Maior media do grupo\n");
	printf("4-Menor media do grupo\n");
	printf("5-Resultado\n");
	printf("6-Listar dados\n");
	printf("7-Sair\n\n");
}

void Cadastrar(){
	for(i=0; i<5; i++){
		printf("Digite o numero de matricula do aluno %i: ",i+1);
		scanf("%i",&cad[i].matricula);
		printf("Nome do aluno: ");
		fflush(stdin);
		fgets(cad[i].nome, 51, stdin);
	    for(j=0; j<3; j++){
			printf("Digite a nota %i:",j+1);
			scanf("%f",&cad[i].nota[j]);
		}
	}
	CalcularMedia();
}


void MaiorNotaPrimProva(){
	for(i=0; i<5; i++){
		if(cad[i].nota[0]>MaiorNotaPri){
			strcpy(aux,cad[i].nome);
			MaiorNotaPri = cad[i].nota[0];
		}
	}
	printf("Aluno que teve a primeira nota maior: %s\n ",aux);
}

void CalcularMedia(){
	for(i=0; i<5; i++){
	   cad[i].md = (cad[i].nota[0] + cad[i].nota[1] + cad[i].nota[2])/3;
	}
}

void listar(){
	for(i=0; i<5; i++){
		printf("Numero de matricula %i: ",cad[i].matricula);
		printf("Nome do aluno %s: ",cad[i].nome);
		printf("Notas\n");
	    for(j=0; j<3; j++){
			printf("%.1f\n",cad[i].nota[j]);
		}
	}
}

void PessoaMaiorMd(){
   for(i=0; i<5; i++){
	   if(cad[i].md > MaiorMedia){
		   strcpy(aux,cad[i].nome);
		   MaiorMedia = cad[i].md;
	   }
   }
   printf("A pessoa com maior media e :%s \n",aux);
}

void PessoaMenorMd (){
    for(i=0; i<5; i++){
	   if(cad[i].md < MenorMedia){
		   strcpy(aux,cad[i].nome);
		   MenorMedia = cad[i].md;
	   }
    }
   printf("A pessoa com menor media e %s :\n",aux);
}

void Resultado(){

    for(i=0;i<5;i++){
        if(cad[i].md>6)
            printf("O aluno %s foi aprovado\n",cad[i].nome);
        else
            printf("O aluno %s foi reprovado\n",cad[i].nome);
    }
}

int main(){

    int op=0;

	while(op!=7){
		menu();
		printf("Digite o que deseja fazer: ");
		scanf("%i",&op);
		printf("\n");
		switch(op){
			case 1: Cadastrar();  break;
			case 2: MaiorNotaPrimProva(); break;
			case 3: PessoaMaiorMd(); break;
			case 4: PessoaMenorMd(); break;
			case 5: Resultado(); break;
			case 6: listar(); break;
            case 7: printf("Saindo..."); break;
			default: printf("Opcao invalida!\n"); break;
		}
	}
	return 0;
}

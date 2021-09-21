#include <stdio.h>

struct Registro{
    char nome[51];
    char rua[51];
    int numero;
    char cidade[51];

};
struct Registro reg[10];
int i;

void EntradaDados(){

    for(i=0;i<10;i++){
        printf("Digite o nome da pessoa %i:",i+1);
        fflush(stdin);
        fgets(reg[i].nome,51,stdin);
        printf("Digite a rua:");
        fflush(stdin);
        fgets(reg[i].rua,51,stdin);
        printf("Digite o numero:");
        scanf("%i",&reg[i].numero);
        printf("Digite a cidade:");
        fflush(stdin);
        fgets(reg[i].cidade,51,stdin);
    }
}

int main(){

    EntradaDados();
    return 0;
}

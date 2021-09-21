#include <stdio.h>
#include <stdlib.h>
int numeromaior=0;
int numeromenor=9999;
typedef struct cadastra cad;
struct cadastra{
    int numero;
};
void entrada(){
    FILE *arquivo;
    cad ctt;
    arquivo = fopen("criar.txt","ab");
    if(arquivo== NULL){
        printf("erro\n");
    }
    else{
        do{
            fflush(stdin);
            printf("Digite o numero: ");
            scanf("%d",&ctt.numero);
            fflush(stdin);

            fwrite(&ctt, sizeof(cad),1,arquivo);

            printf("deseja continuar(s/n)?");
            }while(getche() == 's');
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
                if(ctt.numero>numeromaior){
                    numeromaior=ctt.numero;
                }
                if(ctt.numero<numeromenor){
                    numeromenor=ctt.numero;
                }
        printf("%d |",ctt.numero);
    }
    printf("\n--------------------\n\n");
    printf("numero maior %d\n",numeromaior);
    printf("numero menor %d\n",numeromenor);
    printf("\n--------------------\n\n");
    getch();
    fclose(arquivo);
    }
}
int main()
{
    exibir();
    entrada();
    exibir();

    return 0;
}

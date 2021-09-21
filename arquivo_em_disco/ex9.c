#include <stdio.h>
#include <stdlib.h>
    int vet[10],vet2[10],vet3[10];
int main(int argc, char *argv[])
{
    vetor();
    vetor2();
    vetor3();

    return 0;
}
void vetor(){
    FILE *arq;
    arq=fopen("arquivo.txt","ab");
    for(int i=0;i<10;i++){
            vet[i]=i;
        fprintf(arq,"%d",vet[i]);
    }
    fclose(arq);
}
void vetor2(){
    FILE *arq2;
    arq2 = fopen("arquivo2.txt","ab");
    for(int i=0;i<10;i++){
            vet2[i]=i;
        fprintf(arq2,"%d",vet2[i]);
    }
    fclose(arq2);
}
void vetor3(){
    FILE *arq;
    printf("\nprimeiro vetor\n");
    arq = fopen("arquivo.txt","rb");
        for(int i=0;i<10;i++){
        fscanf(arq,"%d",&vet[i]);
        printf("%d",vet[i]);
    }
    fclose(arq);
    FILE *arq2;
    printf("\nsegundo vetor\n");
    arq2 = fopen("arquivo2.txt","rb");
        for(int i=0;i<10;i++){
        fscanf(arq2,"%d",&vet[i]);
        printf("%d",vet[i]);
    }
    fclose(arq2);
    FILE *arq3;
    arq3 = fopen("arquivo3.txt","ab");
        for(int i=0;i<10;i++){
                fprintf(arq3,"%d",vet[i]+vet2[i]);
        }
    printf("\nterceiro vetor\n");
    arq3 = fopen("arquivo3.txt","rb");
        for(int i=0;i<10;i++){
        fscanf(arq3,"%d",&vet3[i]);
        printf("%d",vet3[i]);
    }
    fclose(arq3);

}

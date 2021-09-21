#include<stdio.h>
#include<stdlib.h>

int *inserir(int n);
void EscreverVetor(FILE*pfile,int n ,int *v);

int main(){
    FILE*fw;
    int n, *v;
    fw=fopen("vetor.txt","w");
    printf("Inserir dimensao do vetor:\n");
    scanf("%d",&n);

    v = Inserir(n);
    EscreverVetor(fw,n,v);

    fclose(fw);
    free(v);

    return 0;
}

int Inserir(int n){
    int i,*vet=NULL;
    vet = (int*) calloc (n,sizeof(int));
    printf("Inserir %d numeros \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    return vet;
}

void EscreverVetor(FILE *pfile,int n, int *v){
int i;
fprintf(pfile,"%d",n);
for(i=0;i<n;i++){
    fprintf(pfile,"%d",v[i]);
}
}

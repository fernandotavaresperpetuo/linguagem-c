#include<stdio.h>
#include<stdlib.h>

int**Inserir(int lin, int col);
void EscreverMatriz(FILE* pfile,int lin, int col,int **m);

int main(){

    FILE*fw;
    int lin, col, **m=NULL;
    fw=fopen("matriz.txt","w");
    printf("Inserir dimensao da matriz: \n");
    scanf("%d %d",&lin,&col);

    m=Inserir(lin,col);
    EscreverMatriz(fw,lin,col,m);

    fclose(fw);
    if(m[0] != NULL) free(m[0]);
    if(m!=NULL) free(m);

    return 0;
}

int ** Inserir(int lin, int col){
    int i,j, **mat=NULL;
    mat=(int **) calloc (lin,sizeof(int *));
    mat[0]=(int *) calloc(lin*col,sizeof(int));
    for(i=1;i<lin;i++)
        mat[i]=&mat[0][col*i];

    printf("Inserir %d numeros :\n",lin*col);

    for(i=0;i<lin;i++)
        for(j=0;j<col;j++)
            scanf("%d",&mat[i][j]);
            /*scanf("%d", *(mat+i)+j)*/
    return mat;
}

void EscreverMatriz(FILE* pfile,int lin ,int col, int **mat){
    int i,j;
    fprintf(pfile,"%d %d\n",lin,col);
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++)
            fprintf(pfile,"%d",mat[i][j]);
        fprintf(pfile,"\n");
    }
}

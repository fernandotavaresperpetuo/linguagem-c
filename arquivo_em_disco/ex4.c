#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 10
#define COL 10

void preenche(float M[LIN][COL]);
void escreve(FILE* pfile, float M[LIN][COL]);
int main()
{
    FILE *fw;
    float num[LIN][COL];
    fw = fopen("random.txt","w");
    srand(time(NULL));
    preenche(num);
    escreve(fw, num);
    fclose(fw);
    return 0;
}
void escreve(FILE* pfile, float M[LIN][COL])
{
    int i,j;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++)
            fprintf(pfile,"%5.4f",M[i][j]);
        fprintf(pfile,"\n");
    }
}
void preenche(float M[LIN][COL])
{
    int i,j;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++)
            M[i][j] = (float)rand()/ RAND_MAX;
    }
}

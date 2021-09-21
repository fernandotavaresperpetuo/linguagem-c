#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct{
    int Q[20];
    int tam;
    int maior;
    int posMaior;
    int menor;
    int posMenor;
}grava;

int main(){

    grava positivo;

    FILE *f = fopen("positivos.bin", "rb");

    if (!f) {
        printf("Erro ao tentar ler o arquivo.\n");
        exit(1);
    }

    while(fread(&positivo, sizeof(grava), 1, f))
        {
            positivo.tam = 20;

            int i;

            positivo.maior    = positivo.Q[0];

            positivo.posMaior = 0;

            for (i = 1; i < positivo.tam; i++) {
                if (positivo.Q[i] > positivo.maior) {
                    positivo.maior    = positivo.Q[i];
                    positivo.posMaior = i;
                }
            }

            printf("\nMaior valor: %i - posicao: %i", positivo.maior, positivo.posMaior+1);
    }

        fclose(f);

    return 0;
}

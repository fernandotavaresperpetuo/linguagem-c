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

            positivo.tam = 20;
            int i;

            for (i = 0; i < positivo.tam; i++) {
            do
                    {
                    printf("Digite um numero positivo se nao,\n");
                    printf("retornara a esse menu\n");
                    printf("\n\nDitige um numero: \t");
                    scanf("%i", &positivo.Q[i]);
                    }while (positivo.Q[i] < 0);
            }

        FILE *f = fopen("positivos.bin", "ab");

        fwrite(&positivo, sizeof(grava), 1, f);

        fclose(f);

    return 0;
}

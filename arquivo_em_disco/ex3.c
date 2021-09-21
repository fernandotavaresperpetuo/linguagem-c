#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fr;
    int cont =0, fim;
    char car;
    fr = fopen("test.txt","r");
    do{
        fim = fscanf(fr,"%c",&car);
        cont =0;
        while(car != '\n' && fim != EOF)
        {
            printf("%c",car);
            if(car == ' ') cont++;
            fim = fscanf(fr,"%c",&car);
        }
        printf("\n Brancos: %d \n",cont);
    }while(fim !=EOF);
    return 0;
}

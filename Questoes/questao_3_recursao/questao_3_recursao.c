#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int soma = 0;

int imprime_soma(){
    int x, y;

    printf("digite o inicio da soma: \t");
    scanf("%d", &x);

    printf("digite o fim da soma: \t\t");
    scanf("%d", &y);

    int somaa(int inicio, int fim){
        if(inicio <= fim){
        soma = soma + inicio;
        somaa(inicio+1, fim);
        }
    }
    somaa(x, y);
    printf("\n\nO resultado da soma dos elementos eh: %d\n", soma);
}

int main(){

    imprime_soma();
    printf("\n\n");

    system("pause");
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

void media(){

    float n1, n2;
    printf("Digite a primeira nota :\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota nota :\n");
    scanf("%f", &n2);
    printf("A media do aluno eh: %.2f", (n1 * 3.5 + n2 * 7.5)/2);
}

int main () {
	media();
    system("pause>>0");
	return 0;
}

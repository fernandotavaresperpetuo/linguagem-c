#include<stdio.h>
#include<stdlib.h>

void media(float n1, float n2){
    float media, c;
    c = ((n1 * 3.5 + n2 * 7.5)/2);
    printf("A media do aluno eh: %.2f", c);
}

int main () {
    float nota1, nota2;
	printf("Digite a primeira nota : \n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);
    media(nota1, nota2);
    system("pause>>0");
	return 0;
	}

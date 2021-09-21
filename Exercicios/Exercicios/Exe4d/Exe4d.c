#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
float mediafinal(float n1, float n2){
    float mediafinal, c;

    c = ((n1 * 3.5 + n2 * 7.5)/2);
    return c;
    /*ou
float mediafinal(float n1, float n2){
    float mediafinal;
    mediafinal = ((n1 * 3.5 + n2 * 7.5)/2);
    return mediafinal;
}
    */
}
int main () {

    float nota1;
    float nota2;

	printf("Digite a primeira nota : \n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);

    printf("A media do aluno eh: %.2f  \n", mediafinal(nota1,nota2));
    system("pause>>0");
	return 0;
}

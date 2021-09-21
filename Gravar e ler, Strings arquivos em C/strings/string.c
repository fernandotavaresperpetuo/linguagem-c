#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

    char aval1[10] = "Excelente";
    char aval2[20] = "Bom";
    char aval3[20] = "Preocupante";
    char aval4[20] = "Tente de Novo";

    float media;

    char nome[30];

    char numeromatricula[3];

    int matricula;

int main(){


//	print("Digite seu nome: ");
	//scanf("%s", aval1);

	printf("nome1 = %s\n", aval1);

	strcpy(aval2,aval1);
	//strcpy(string_destino, string_origem);

	printf("nome2 = %s\n", aval2);


    printf("%s\n %s\n %s\n %s\n" , aval1, aval2, aval3, aval4);
    return 0;
}

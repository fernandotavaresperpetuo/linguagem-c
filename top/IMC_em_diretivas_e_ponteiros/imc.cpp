#include<stdio.h>

#include "arquivo.c"

/*
void imcc(float peso, float altura, float res){

    //res = formula(peso, altura, res);
    printf("Qual eh seu peso?\t");
    scanf("%f", &peso);

    printf("\n\nQual eh a sua altura?\t");
    scanf("%f", &altura);

    //formula;
    //formula(peso, altura, res);
    if(res < 20)
        printf("\n\nabaixo do peso\n\n");
        else
            if(20 > res < 25 )
                printf("\n\npeso normal\n\n");
                else
                if(25 > res < 30 )
                    printf("\n\nsobrepeso\n\n");
                        else
                            if(30 > res < 40)
                            printf("\n\nobeso\n\n");
                            else
                                if(res > 39)
                                printf("\n\nObeso Morbido\n\n");
                                }
                                */

main(){
    float peso, altura, imc;
    float *Peso, *Altura, *Imc;

    Peso = &peso;
    Altura = &altura;
    Imc = &imc;

    formula(peso, altura);

    //Pontformula = formula(peso, altura, res);

    //res = Pontformula;
    //imcc(peso, altura, res);

    //printf("\nValor= %f\n\n", formula(peso, altura, res));
    //printf("imc: %f\n", imcc(peso, altura, res));
    //system("pause");
    //return 0;
}
/*
float peso, altura, res;

    printf("Qual eh seu peso e qual a sua altura");
    scanf("%f %f", &peso, &altura);

    formula;
    if(res < 20)
        printf("abaixo do peso");
        if(20 > res < 25 )
        printf("peso normal");
        if(25 > res < 30 )
        printf("sobrepeso");
        if(30 > res < 40)
        printf("obeso");
        if(res > 39)
        printf("Obeso Morbido");
*/

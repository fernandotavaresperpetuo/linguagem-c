#include <stdio.h>
#include <stdlib.h>
float formula(float peso, float altura)  {

    float imc;



    printf("Qual eh seu peso?\t");
    scanf("%f", &peso);

    printf("\n\nQual eh a sua altura?\t");
    scanf("%f", &altura);

    imc = peso/(altura*altura);
    printf("\n\nSeu IMC Indice de Massa Corporea eh:\n\t\t%.2f", imc);

    //formula;
    //formula(peso, altura, imc);
    if(imc < 20)
        printf("\n\n\t  Abaixo do Peso\n\n");
        else
            if(imc > 19 &&  imc < 26)
                printf("\n\n\t  Peso Normal\n\n");
                else
                if(imc > 25 && imc < 31 )
                    printf("\n\n\t  SobrePeso\n\n");
                        else
                            if(imc > 30 && imc < 41)
                            printf("\n\n\t  Obeso\n\n");
                            else
                                if(imc > 40)
                                printf("\n\n\t  Obeso Morbido\n\n");
    return 0;
}

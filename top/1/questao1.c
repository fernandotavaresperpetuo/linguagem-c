#include <stdio.h>
#include <stdlib.h>




/*
                        horas 500* valor hora trabalhada
                        numero dependentes = ?*32
                        quantidade horas extras
                        hora extra= (valor hora trabalhada + (valor hora trabalhada/2)
                        salario bruto=salario+numero de dependentes+hora extra
                        IRRF <901 isento
                        900 > IRRF < 1501 salario liquido = salario bruto - (salario bruto/10)
                        1500 > IRRF salario liquido = salario bruto - (salario bruto/5)
                        IRRF <901 isento

*/
int main(){


    float qhrs_ex, vlhrs_ex, recebhrs_ex, qdp, recebe_dp, qhrs, vlhrt, slr, slrbr, slrm, bon_cinq, bon_cem;





    printf("Digite O valor do salario minimo:\t\n\n");
    scanf("%f", &slrm);

    printf("Digite O numero de horas trabalhadas:\t\n\n");
    scanf("%f", &qhrs);
//· O valor do salário mínimo;
//· O número de horas trabalhadas dos
    printf("Digite O numero de dependentes de cada funcionario:\t\n\n");
    scanf("%f", &qdp);
//· O número de dependentes de cada funcionário;
    printf("Digite quantidade de horas extras trabalhadas:\t\n\n");
    scanf("%f", &qhrs_ex);

    vlhrt = slrm/10;

    slr = qhrs * vlhrt;

    vlhrs_ex = vlhrt+vlhrt/2;

    recebhrs_ex = qhrs_ex * vlhrs_ex;

    recebe_dp = qdp*32;

    slrbr = slr + recebe_dp + recebhrs_ex;

    /*

    printf("O Seu valor hora trabalhada eh: %.2f \t\n\n", vlhrt);
    printf("O Seu salario eh: %.2f \t\n\n", slr);
    printf("O Seu valor hora extra eh: %.2f \t\n\n", vlhrs_ex);
    printf("O Seu receber hr extra eh: %.2f \t\n\n", recebhrs_ex);
    printf("O Seu receber dependente eh: %.2f \t\n\n", recebe_dp);
    printf("O Seu Salario bruto sem desconto eh: %.2f \t\n\n", slrbr);

    */


//· Quantidade de horas extras trabalhadas.

    if(slrbr < 901 ){
        printf("O Seu Salario Liquido eh: %.2f \t\n\n", slrbr);
        bon_cem = slrbr + 100;
        //printf("O Seu Salario Liquido eh: %.2f \t\n\n", slrbr);

        printf("O Seu Salario Liquido mais bonificacao eh: R$%.2f \t\n\n", bon_cem);
        }
        else{
            if(slrbr > 900  && slrbr < 1501){
            slrbr = (slrbr-(slrbr/10));
            printf("O Seu Salario Liquido eh: R$%.2f \t\n\n", slrbr);
            bon_cinq = slrbr +50;



            //printf("O Seu Salario Liquido eh: %.2f \t\n\n", slrbr);

            printf("O Seu Salario Liquido mais  bonificacao eh: R$%.2f \t\n\n", bon_cinq);

            }
            else{
            if(slrbr > 1501){
                //printf("O Seu Salario Liquido eh: %.2f \t\n\n", slrbr);

                slrbr = (slrbr-(slrbr/5));

                bon_cinq = slrbr +50;

                printf("O Seu Salario Liquido eh: R$%.2f \t\n\n", slrbr);


                printf("O Seu Salario Liquido mais bonificacao eh: R$%.2f \t\n\n", bon_cinq);
                }
            }
        }

                /*
                printf("20%");

                        IRRF <901 isento
                        900 > IRRF < 1501 salario liquido = salario bruto - (salario bruto/10)
                        1500 > IRRF salario liquido = salario bruto - (salario bruto/5)
}
R$ 998,00
*/

    system("pause");
    return 0;
}

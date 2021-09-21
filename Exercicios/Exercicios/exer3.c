#include <stdio.h>

int main(void){

int num,cont=0,matriz[6][6];

for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
    printf("Qual o valor da matriz[%i][%i]?\n", i, j);
    scanf("%i", &matriz[i][j]);
    if(matriz[i][j]>10){
    cont++;
        }
    }
}

printf("Ha %i valores maiores que 10.", cont);

return 0;

}

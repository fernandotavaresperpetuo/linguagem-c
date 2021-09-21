#include <stdio.h>

int main(){

int vetorq[10]={10, 5, 2, 0, 1, 5, 10, 2, 2, 1},i=0,j=0;
float vetorp[10]={1.5, 2, 3.5, 1.5, 4, 6, 1, 2.5, 1.5, 2},fatum;

for(int i=0; i<10; i++){
fatum=vetorq[i]*vetorp[j];
i++;
j++;
};
printf("O faturamento mensal foi %f", fatum);
printf("\n");

for(i=0; i<10; i++){
    printf("A venda do produto %i foi %i\n", i,vetorq[i]);};

for(i=0; i<10; i++){
    printf("O preco do produto %i foi %f\n", i,vetorp[i]);};

return 0;

}

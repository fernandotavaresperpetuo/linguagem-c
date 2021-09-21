#include <stdio.h>

int main(){

int ident,dep,no=4;
float rendab,desdep,liquid;

while(no<5){
printf("Qual o seu numero de identificaçao?");
scanf("%i", &ident);
printf("Quantos sao seus dependentes?");
scanf("%i", &dep);
printf("Qual o valor da renda bruta anual?");
scanf("%f", &rendab);
desdep=dep*600;
liquid=desdep-rendab;
printf("A renda liquida e %f\n", liquid);
if(rendab<0){no++;};

if(rendab>0 && rendab<10.000){
printf("Isento./n");};
if(rendab>10.000 && rendab<30.000){
printf("5 porcento cobrados de impostos.\n");};
if(rendab>30.000 && rendab<60.000){
printf("10 porcento cobrados de impostos.\n");};
if(rendab>60.000){
printf("15 porcento cobrados de impostos.\n");};
};


return 0;

}



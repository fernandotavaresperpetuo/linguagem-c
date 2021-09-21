#include<stdio.h>
#include<math.h>

#include"quadrado.c"

#define entrada printf("Digite o valor da base:");\
                scanf("%d",&b);\
                printf("Digite o valor da altura:");\
                scanf("%d",&h);

#define percent res = (perc*v1)/100;                    \
                printf("O percentual:%.2f \n",res);

int b,h,valor,perc,v1;
float raiz,res;

int main(){


int resp = 0,arearetangulo=0;

resp = areaquadrado(2,2);
printf("A area do quadrado e: %d \n",resp);


entrada;

arearetangulo=b*h;
printf("Area do retangulo:%d \n",arearetangulo);


printf("Digite um valor:");
scanf("%d",&valor);
raiz=sqrt(valor);
printf("Raiz:%.2f \n",raiz);

printf("Digite o percentual:");
scanf("%d",&perc);
printf("Digite de quanto vc quer calcular este percentual:");
scanf("%d",&v1);
percent;

return 0;
}

#include<stdio.h>

#define entrada printf("Digite o primeiro valor:");\
                scanf("%d",&a);\
                printf("Digite o segundo valor:");\
                scanf("%d",&b);

#define condicao if(a==0)exit (1);

#define potencia  for(i=0; i<b;i++)\
                        {pot=pot*a;};\


#define comparacao if(a>b){printf("Maior:%d\n",a);printf("Menor:%d\n",b);}\
                    else{printf("Maior:%d\n",b);printf("Menor:%d\n",a);}

int a,b,i,pot=1;

int main(){

    entrada;
    condicao;
    potencia;
    printf("A potencia de %d elevado a %d: %d \n",a,b,pot);
    comparacao;

    return 0;
}

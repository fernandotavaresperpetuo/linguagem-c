#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
     double num = 1.7926627525871599;
     char teste[19];
     int i,inteiro;
     double frac;
     printf("Numero arredondado:%.3lf\n",num);
     inteiro = floor(num);
     frac = num -inteiro;
     printf("Numero sem arredondamento:");
     printf("%d.",inteiro);
     sprintf(teste,"%lf",frac*pow(10,16));
     for(i=0;i<3;i++)
          printf("%c",teste[i]);
return 0;
}

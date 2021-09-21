#include<stdio.h>

#define SOMA(x,y) x + y

main(){
   
   int a = SOMA(1, 2);
   double b = SOMA(1.0, 2.0);
    
   printf("Soma 1: %d\n",a);
   printf("Soma 2: %.1f",b);
}

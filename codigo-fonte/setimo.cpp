#include<stdio.h>

#define TROCA(a,b,c) {c t=a; a=b; b=t;}

main(){
	
	int x, y;
	x = 1;
	y = 2;
	
	TROCA(x, y, int);
	
	printf("Valor x: %d\n",x);
	printf("Valor y: %d",y);
}



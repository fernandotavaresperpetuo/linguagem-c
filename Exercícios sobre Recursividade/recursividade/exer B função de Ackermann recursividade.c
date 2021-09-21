#include<stdio.h>

long long ackermann(int m, int n){
	if (m==0) return n+1;
	else if (m>0&&n==0) return ackermann( m-1, 1);
	else return (ackermann( m-1,ackermann( m,n-1)));
}

int main(){
	int m=3,n=2;
	printf("A funcao de Ackermann e definida para valores inteiros e nao negativos m e n \n\n");
	printf("o valor de A( 3, 2) Ackermann: %lld\n", ackermann( m, n));
	printf("Calcular outro valor\n");
	printf("Digite um valor para m:");
	scanf("%d", &m);
	printf("Digite um valor para n:");
	scanf("%d", &n);
	printf("o valor de Ackermann: %lld", ackermann( m, n));
	
 	return 0;
}

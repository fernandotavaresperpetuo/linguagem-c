#include<stdio.h>

long long comb(int n, int k){
	if (k==1) return n;
	else if (k==n) return 1;
	else return (comb(n-1,k-1)+comb(n-1,k));
}

int main(){
	int k,n;
	printf( "funcao recursiva que calcule o numero de grupos distintos com k pessoas que podem\n"
			"ser formados a partir de um conjunto de n pessoas. \n\n");
	printf("Digite um valor para n:");
	scanf("%d", &n);
	printf("Digite um valor para k:");
	scanf("%d", &k);
	printf("o valor do combo: %lld", comb( n, k));
	
 	return 0;
}

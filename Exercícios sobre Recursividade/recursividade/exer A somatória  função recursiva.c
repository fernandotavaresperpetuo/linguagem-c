#include<stdio.h>
#include<math.h>

int i=0;

int somatoria(int n){
	++i;
	if (i==n) return pow(i, 2);
	else return (pow(i, 2) + somatoria(n));
}
int main(){
	int somt;
	printf("digite um valor inteiro (n) para o somat%crio %c: ", 162, 228);
	scanf("%d", &somt);
	printf("o valor do somat%crio %c %C: %d", 162, 228, 130, somatoria(somt));
	return 0;
}

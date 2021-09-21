#include<stdio.h>

#define TAM 20

main(){
	
	int vetor[TAM];
	
	#undef TAM
    #define TAM 100
    
    vetor[TAM];
}



#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int i;
	
	//Movimento da Torre
	printf("=== MOVIMENTO DA TORRE ===\n");
	
	for(i = 0; i < 5; i++){
	    printf("Direita\n");
	}
	i = 0;
	
	//Movimento do Bispo
	printf("\n=== MOVIMENTO DO BISPO ===\n");
	
	while(i < 5){
	    printf("Direita\n");
	    printf("Cima\n");
	    i++;
	}
	i = 0;
	
	//Movimento da Rainha
	printf("\n=== MOVIMENTO DA RAINHA ===\n");
	
	do{
	    printf("Esquerda\n");
	    i++;
	}while(i < 8);
	i = 0;

	return 0;
}

#include <stdio.h>

int main() {

	int i, j;
	
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
	
	//Movimento do Cavalo
	printf("\n=== MOVIMENTO DO CAVALO ===\n");
	
	for(i = 0; i < 1; i++)
	{
	    for(j = 0; j < 2; j++)
	    {
	        printf("Baixo\n");
	    }
	    printf("Esquerda\n");
	}

	return 0;
}

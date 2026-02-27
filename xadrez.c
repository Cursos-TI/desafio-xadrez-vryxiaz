#include <stdio.h>

//Movimento da torre
void moverTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

//Movimento do Bispo
void moverBispo(int casas){
    if(casas > 0){
        for(int i = 0; i < 1; i++){
        printf("Cima\n");
        for(int j = 0; j < 1; j++){
            printf("Direita\n");
        }
    }
    moverBispo(casas - 1);
    }
}

//Movimento da Rainha
void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

//Movimento do Cavalo
void moverCavalo(){
    for(int i = 0; i < 1; i++){
        for(int j = 0; j < 2; j++){
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

int main() {

	int i, j;
	
	//Chamar movimeto da torre
	printf("=== MOVIMENTO DA TORRE ===\n");
	moverTorre(5);
	
	//Chamar movimento do Bispo
	printf("\n=== MOVIMENTO DO BISPO ===\n");
	moverBispo(5);
	
	//Chamar movimento da Rainha
	printf("\n=== MOVIMENTO DA RAINHA ===\n");
	moverRainha(8);
	
	//Chamar movimento do Cavalo
	printf("\n=== MOVIMENTO DO CAVALO ===\n");
	moverCavalo();

	return 0;
}
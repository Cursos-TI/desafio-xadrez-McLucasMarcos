#include <stdio.h>

void torre(int casas){
    if(casas > 0){
        printf("Torre: Direita \n");
        torre(casas - 1);
    }
}

void bispo(int casas){
    if (casas > 0){
        printf("Bispo: Cima, Direita \n");
        bispo(casas - 1);
    } 
    
}

void rainha(int casas){
    if(casas > 0){
        printf("Rainha: Esquerda \n");
        rainha(casas - 1);
    }
}

void cavalo(int casas){
    for (int i = 0; i < 2; i++){
        printf("Cavalo: Cima \n");
    }
    printf("Cavalo: Direita \n");
}

void peao(int casas){
    if(casas > 0){
        printf("Peão: Cima, Direita \n");
        peao(casas - 1);
    } 
}

int main(){

torre(5);

printf("\n");

bispo(5);

printf("\n");

rainha(8);

printf("\n");

cavalo(2);

printf("\n");

peao(1);

    return 0;
}
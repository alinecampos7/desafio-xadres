#include <stdio.h>

// Função que simula o movimento da Torre usando estrutura for
void moverTorre() {
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
}

// Função que simula o movimento do Bispo usando estrutura while
void moverBispo() {
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }
}

// Função que simula o movimento da Rainha usando estrutura do-while
void moverRainha() {
    printf("\nMovimento da Rainha:\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
}

// Função que simula o movimento do Cavalo usando loops aninhados
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    // Loop externo para duas casas para baixo (obrigatoriamente for)
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // Loop interno para uma casa para a esquerda (pode ser while ou do-while)
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }
}

int main() {
    // Chamando as funções das peças
    moverTorre();
    moverBispo();
    moverRainha();
    moverCavalo();

    return 0;
}

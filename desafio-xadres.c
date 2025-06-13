#include <stdio.h>

// Função para simular o movimento da Torre usando o "For"
void moverTorre() {
    printf("Movimento da Torre (5 casas para a Direita):\n");

    // Torre anda 5 casas para a direita
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n"); 
    }

    printf("\n");
}

// Função para simular o movimento do Bispo usando o "While"
void moverBispo() {
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");

    int i = 1;

    // Bispo anda 5 casas na diagonal (cima + direita)
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");
}

// função para simular o movimento da Rainha usando o "Do-while"
void moverRainha() {
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");

    int i = 1;

    // Rainha anda 8 casas para a esquerda
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    printf("\n");
}

int main() {
    // Chamando as funções para cada peça
    moverTorre();
    moverBispo();
    moverRainha();

    return 0;
}
#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função com loops aninhados para o Bispo (apenas exibição)
void moverBispoComLoop(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) { // Apenas uma casa horizontal por vez
            printf("Cima Direita\n");
        }
    }
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função com loops aninhados e múltiplas condições para o Cavalo
void moverCavalo() {
    int direcaoVertical = 2;
    int direcaoHorizontal = 1;

    for (int i = 0; i < direcaoVertical; i++) {
        if (i == 1) {
            for (int j = 0; j < direcaoHorizontal; j++) {
                if (j == 0) {
                    printf("Direita\n");
                    continue;
                }
            }
        }
        printf("Cima\n");
    }
}

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Torre com recursividade
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    // Bispo com recursividade
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);

    printf("\n");

    // Bispo com loops aninhados
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoComLoop(casasBispo);

    printf("\n");

    // Rainha com recursividade
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    // Cavalo com loops complexos
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}


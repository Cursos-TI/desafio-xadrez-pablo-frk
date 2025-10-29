#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função para movimentação do Bispo (diagonal)
void moverBispo(int casas)
{
    for (int i = 0; i < casas; i++)
    {
        printf("[BISPO: Cima, Direita]\n");
    }
}

// Função para movimentação da Torre (horizontal)
void moverTorre(int casas)
{
    for (int i = 0; i < casas; i++)
    {
        printf("[TORRE: Direita]\n");
    }
}

// Função para movimentação da Rainha (esquerda)
void moverRainha(int casas)
{
    for (int i = 0; i < casas; i++)
    {
        printf("[RAINHA: Esquerda]\n");
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int casasBispo = 4;
    const int casasTorre = 5;
    const int casasRainha = 6;

    // Implementação de Movimentação do Bispo
    printf("Movimentacao do Bispo:\n");
    moverBispo(casasBispo);

    // Implementação de Movimentação da Torre
    printf("\nMovimentacao da Torre:\n");
    moverTorre(casasTorre);

    // Implementação de Movimentação da Rainha
    printf("\nMovimentacao da Rainha:\n");
    moverRainha(casasRainha);

    return 0;
}

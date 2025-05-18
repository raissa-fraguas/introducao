#include <stdio.h>

#define TORRE_MOVIMENTOS 5
#define BISPO_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8
#define CAVALO_MOVIMENTOS 1

// Função recursiva para o movimento da Torre
void movimentoTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        movimentoTorre(casas - 1);
    }
}

// Função recursiva e com loops aninhados para o movimento do Bispo
void movimentoBispo(int Mvertical, int MHorizontal)
{
    if (Mvertical > 0)
    { // Verifica se ainda há casas para mover verticalmente
        for (int j = 0; j < MHorizontal; j++)
        { // Loop interno para o movimento horizontal
            printf("Cima, Direita\n");
        }
        movimentoBispo(Mvertical - 1, MHorizontal); // Chamada recursiva para o movimento vertical
    }
}

// Função recursiva para o movimento da Rainha
void movimentoRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}

// Função para o movimento do Cavalo
void movimentoCavalo(int movimentoL)
{
    for (int i = 0; i < movimentoL; i++)
    {
        for (int j = 0; j < 2; j++)
        { // Loop para simular duas casas para cima
            printf("Cima\n");
        }
        printf("Direita\n"); // Uma casa para a direita
    }
}

int main()
{
    // Chamada dos procedimentos
    printf("\nTorre move %d casas para a direita:\n", TORRE_MOVIMENTOS);
    movimentoTorre(TORRE_MOVIMENTOS);

    printf("\nBispo move %d casas na diagonal para cima e à direita:\n", BISPO_MOVIMENTOS);
    movimentoBispo(BISPO_MOVIMENTOS, 1); // O bispo se move 1 casa horizontalmente para cada casa vertical

    printf("\nRainha move %d casas para a esquerda:\n", RAINHA_MOVIMENTOS);
    movimentoRainha(RAINHA_MOVIMENTOS);

    printf("\nCavalo move-se em L:\n");
    movimentoCavalo(CAVALO_MOVIMENTOS);

    return 0;
}

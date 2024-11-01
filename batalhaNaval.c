#include <stdio.h>

// Desafio Batalha Naval - MateCheck
int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    //Declaração do tabuleiro e declaração e iniciação dos navios
    int tabuleiro[10][10];
    int navio1[3][2] = 
    {
        {1,1}, 
        {2,1}, 
        {3,1}
    };
    int navio2[3][2] = 
    {
        {3,5}, 
        {3,6}, 
        {3,7}
    };

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(i == navio1[0][0] && j == navio1[0][1])
            {
                printf("3");
            }
            else if(i == navio1[1][0] && j == navio1[1][1])
            {
                printf("3");
            }
            else if(i == navio1[2][0] && j == navio1[2][1])
            {
                printf("3");
            }
            if(i == navio2[0][0] && j == navio2[0][1])
            {
                printf("3");
            }
            else if(i == navio2[1][0] && j == navio2[1][1])
            {
                printf("3");
            }
            else if(i == navio2[2][0] && j == navio2[2][1])
            {
                printf("3");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

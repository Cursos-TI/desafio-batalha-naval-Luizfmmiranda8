#include <stdio.h>

// Desafio Batalha Naval - MateCheck
int main() {
    // Nível Novato - Posicionamento dos Navios

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
    int navio3[3][2] = 
    {
        {4,3}, 
        {5,2}, 
        {6,1}
    };
    int navio4[3][2] = 
    {
        {7,6}, 
        {8,7}, 
        {9,8}
    };

    //Percorrendo o tabuleiro e verificando se coincide com a posição de algum navio
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(i == navio1[0][0] && j == navio1[0][1])
            {
                printf("3 ");
            }
            else if(i == navio1[1][0] && j == navio1[1][1])
            {
                printf("3 ");
            }
            else if(i == navio1[2][0] && j == navio1[2][1])
            {
                printf("3 ");
            }
            else if(i == navio2[0][0] && j == navio2[0][1])
            {
                printf("3 ");
            }
            else if(i == navio2[1][0] && j == navio2[1][1])
            {
                printf("3 ");
            }
            else if(i == navio2[2][0] && j == navio2[2][1])
            {
                printf("3 ");
            }
            else if(i == navio3[0][0] && j == navio3[0][1])
            {
                printf("3 ");
            }
            else if(i == navio3[1][0] && j == navio3[1][1])
            {
                printf("3 ");
            }
            else if(i == navio3[2][0] && j == navio3[2][1])
            {
                printf("3 ");
            }
            else if(i == navio4[0][0] && j == navio4[0][1])
            {
                printf("3 ");
            }
            else if(i == navio4[1][0] && j == navio4[1][1])
            {
                printf("3 ");
            }
            else if(i == navio4[2][0] && j == navio4[2][1])
            {
                printf("3 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

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

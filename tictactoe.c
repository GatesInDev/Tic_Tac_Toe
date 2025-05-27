#include <stdio.h>
#include "tictactoe_h.h"
#include "tictactoe_h.c"

int main() {
    char tabuleiro[SIZE][SIZE];
    char jogadorAtual = 'X';
    int linha, coluna;

    inicializarTabuleiro(tabuleiro);

    while(1)
    {
        exibirTabuleiro(tabuleiro);
        printf("Jogador %c, digite linha e coluna (1 a 3): ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);

        linha -= 1;
        coluna -= 1;

        if(!jogadaValida(tabuleiro, linha, coluna))
        {
            printf("Jogada inválida. Tente novamente.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogadorAtual;

        if(verificarVencedor(tabuleiro))
        {
            exibirTabuleiro(tabuleiro);
            printf("Jogador %c venceu!\n", jogadorAtual);
            break;
        }

        if(tabuleiroCompleto(tabuleiro))
        {
            exibirTabuleiro(tabuleiro);
            printf("Empate!\n");
            break;
        }

        if(jogadorAtual == 'X')
        {
            jogadorAtual = 'O';
        }
        else
        {
            jogadorAtual = 'X';
        }

    }

    return 0;
}

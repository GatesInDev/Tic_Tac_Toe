#ifndef TICTACTOE_H
#define TICTACTOE_H

#define SIZE 3

void inicializarTabuleiro(char tabuleiro[SIZE][SIZE]);
void exibirTabuleiro(char tabuleiro[SIZE][SIZE]);
int verificarVencedor(char tabuleiro[SIZE][SIZE]);
int jogadaValida(char tabuleiro[SIZE][SIZE], int linha, int coluna);
int tabuleiroCompleto(char tabuleiro[SIZE][SIZE]);

#endif

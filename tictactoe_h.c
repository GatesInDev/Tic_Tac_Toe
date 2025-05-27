void inicializarTabuleiro(char tabuleiro[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
}

void exibirTabuleiro(char tabuleiro[SIZE][SIZE])
{
    printf("\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);

        if (i < SIZE - 1)
        {
            printf("---|---|---\n");
        }
    }

    printf("\n");
}

int jogadaValida(char tabuleiro[SIZE][SIZE], int linha, int coluna)
{
    if (linha >= 0 && linha < SIZE && coluna >= 0 && coluna < SIZE)
    {
        return tabuleiro[linha][coluna] == ' ';
    }
    return 0;
}

int verificarVencedor(char tabuleiro[SIZE][SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {

        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ')
        {
            return 1;
        }

        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ')
        {
            return 1;
        }

    }

    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ')
    {
        return 1;
    }
    
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')
    {
        return 1;
    }

    return 0;
}

int tabuleiroCompleto(char tabuleiro[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (tabuleiro[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}
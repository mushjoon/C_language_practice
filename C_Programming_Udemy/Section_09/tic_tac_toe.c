#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char board[9][17];
char player1 = 'X';
char player2 = 'O';

void refreshBoard();
void drawBoard();
void markBoard(char player);
void checkForWin();
bool isEmptySpace(int choice);

int main()
{
    char winner = ' ';

    refreshBoard();
    drawBoard();

    while (winner = ' ')
    {
        printf("Player 1 ==> ");
        markBoard(player1);
        drawBoard();
        printf("Player 2 ==> ");
        markBoard(player2);
        drawBoard();
    }

    return 0;
}

void drawBoard()
{
    for (int row = 0; row < 9; row++)
    {
        if (row == 2 || row == 5)
        {
            printf("_____|_____|_____\n");
        }
        else if (row == 1)
        {
            printf("  %c  |  %c  |  %c  \n", board[1][2], board[1][8], board[1][14]);
        }
        else if (row == 4)
        {
            printf("  %c  |  %c  |  %c  \n", board[4][2], board[4][8], board[4][14]);
        }
        else if (row == 7)
        {
            printf("  %c  |  %c  |  %c  \n", board[7][2], board[7][8], board[7][14]);
        }
        else
        {
            printf("     |     |     \n");
        }
    }
}

void refreshBoard()
{
    board[1][2] = '1';
    board[1][8] = '2';
    board[1][14] = '3';
    board[4][2] = '4';
    board[4][8] = '5';
    board[4][14] = '6';
    board[7][2] = '7';
    board[7][8] = '8';
    board[7][14] = '9';
}

void markBoard(char player)
{
    int choice = 0;
    // char space1 = board[1][2];
    // char space2 = board[1][8];
    // char space3 = board[1][14];
    // char space4 = board[4][2];
    // char space5 = board[4][8];
    // char space6 = board[4][14];
    // char space7 = board[7][2];
    // char space8 = board[7][8];
    // char space9 = board[7][14];

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if (board[1][2] == '1')
        {
            board[1][2] = player;
            break;
        }
        else
        {
            printf("Invalid move\n");
            return;
        }
    case 2:
        if (board[1][8] == '2')
        {
            board[1][8] = player;
            break;
        }
        else
        {
            printf("Invalid move\n");
            return;
        }
    case 3:
        if (board[1][14] == '3')
        {
            board[1][14] = player;
            break;
        }
        else
        {
            printf("Invalid move\n");
            break;
        }
    case 4:
        if (board[4][2] == '4')
        {
            board[4][2] = player;
            break;
        }
        else
        {
            printf("Invalid move\n");
            break;
        }
    case 5:
        if (board[4][8] == '5')
        {
            board[4][8] = player;
            break;
        }
        else
        {
            printf("Invalid move\n");
            break;
        }
    case 6:
        if (board[4][14] == '6')
        {
            board[4][14] = player;
            break;
        }
        else
        {
            printf("Invalid move\n");
            break;
        }
    case 7:
        if (board[7][2] == '7')
        {
            board[7][2] = player;
            break;
        }
        else
        {
            printf("Invalid move\n");
            break;
        }
    case 8:
        if (board[7][8] == '8')
        {
            board[7][8] = player;
            break;
        }
        else
        {
            printf("Invalid move\n");
            break;
        }
    case 9:
        if (board[7][14] == '9')
        {
            board[7][14] = player;
            break;
        }
        else
        {
            printf("Invalid move\n");
            break;
        }
    default:
        printf("Invalid move\n");
        break;
    }
}
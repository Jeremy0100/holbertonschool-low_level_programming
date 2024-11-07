#include <stdio.h>

/**
 * print_chessboard - function that print the chessboard
 * @plateau: array representing the chessboard
 *
 * prints the chessboard
 *
 */

void print_chessboard(char (*plateau)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			putchar (plateau[i][j]);
		putchar('\n');
	}
}

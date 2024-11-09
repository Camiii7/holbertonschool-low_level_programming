#include "main.h"

/**
 * print_chessboard - Imprime el tablero de ajedrez
 * @a: El tablero de ajedrez representado como una matriz 8x8.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

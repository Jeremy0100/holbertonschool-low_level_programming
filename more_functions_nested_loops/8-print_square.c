#include <stdio.h>
#include "main.h"

/**
* print_square - prints a square
*
* Description: Prints a square on the terminal.
*
* @size: size
*
* Return: Always 0
*
*/

void print_square(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

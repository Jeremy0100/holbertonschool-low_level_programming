#include <stdio.h>
#include "main.h"

/**
* print_diagonal - draws a diagonal line
*
* Description: Draws a diagonal line on the terminal
*
* @n: Starting
*
* Return: Always 0
*
*/

void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

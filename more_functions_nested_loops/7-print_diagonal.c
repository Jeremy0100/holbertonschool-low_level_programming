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

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\')
				_putchat('\n')
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}

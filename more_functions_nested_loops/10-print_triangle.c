#include <stdio.h>
#include "main.h"

/**
* print_triangle - prints all natural number from n to 98
*
* Description: Prints all natural number from n to 98.
*
* @i , @j , @k: triangle variables
*
* @size: size
*
* Return: Nothing
*
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 1 ; i <= size ; i++)
	{
		for (j = size - i ; j > 0 ; j--)
		{
			_putchar(' ');
		}
		for (k = 1 ; k <= i ; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

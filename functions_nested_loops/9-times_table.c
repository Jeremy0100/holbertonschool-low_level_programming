#include "main.h"
#include <stdio.h>

/**
* times_table - prints the 9 times table
*
* Description: Prints the 9 times table, starting with 0
*
* @i , @j: multiplication
*
* Return: Nothing
*
*/

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			c = a * b;
			_putchar(44);
			_putchar(32);
			if (c <= 9)
			{
				_putchar(32);
				_putchar(c + 48);
			}
			else
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
		}
	_putchar('\n');
	}
}

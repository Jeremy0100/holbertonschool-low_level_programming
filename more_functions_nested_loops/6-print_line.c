#include <stdio.h>
#include "main.h"

/**
* print_line - draws a straight line
*
* Description: Draws a straight line in the terminal.
*
* @n: Starting
*
* Return: Always 0
*
*/

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}


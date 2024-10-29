#include <stdio.h>
#include "main.h"

/**
* print_rev - prints a string in reverse.
*
* Description: Prints a string in reverse followed by a new line.
*
* @s: Starting
*
* Return: Always 0
*
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (; i > 0; i--)
	{
		_putchar(s[i - 1]);
	}


	_putchar('\n');
}

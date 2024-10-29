#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* puts_half - prints half of a string
*
* Description: Prints half of a string followed by a new line.
*
* @str: Starting
*
* Return: Always 0
*
*/

void puts_half(char *str)
{
	int i;
	int halflen;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		halflen = len / 2;
	}
	else
	{
		halflen = (len + 1) / 2;
	}

	for (i = halflen; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

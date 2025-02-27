#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* puts_half - Prints half of a string.
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
	int len = 0;
	char *halflen = str;
	int n;

	while (*halflen != '\0')
	{
		halflen++;
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for ( ; n < len ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

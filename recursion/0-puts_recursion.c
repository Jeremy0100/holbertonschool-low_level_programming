#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - puts with recursion, prints a string followed by new line
 * @s: pointer char
 * Return: 0
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		if (*s != '\0')
		{
			putchar(*s);
			_puts_recursion(s + 1);
		}
	}
}

#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Puts with recursion, prints a string.
 * @s: pointer char
 * Return: 0
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		if (*s != '\0')
		{
			_putchar(*s);
			_puts_recursion(s + 1);
		}
	}
}

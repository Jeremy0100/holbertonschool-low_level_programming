#include <stdio.h>
#include "main.h"

/**
* _puts - prints a string
*
* Description: Prints a string, followed by a new line, to stdout.
*
* @str: Starting
*
* Return: Always 0
*
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}

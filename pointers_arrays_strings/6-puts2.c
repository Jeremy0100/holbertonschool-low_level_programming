#include <stdio.h>
#include "main.h"

/**
* puts2 - prints every other character of string starting with first character
*
* Description: Prints every other character of a string, followed by new line
*
* @str: Starting
*
* Return: Always 0
*
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

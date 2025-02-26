#include <stdio.h>
#include "main.h"

/**
* rev_string - Reverses a string.
*
* Description: Prints a string in reverse followed by a new line.
*
* @s: Starting
*
* Return: Always 0
*
*/

void rev_string(char *s)
{
	int length = 0, i = 0;
	char c;

	while (s[i++])
		length++;

	for (i = length - 1; i >= length / 2; i--)
	{
		c = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = c;
	}
}

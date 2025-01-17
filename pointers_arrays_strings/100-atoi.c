#include <stdio.h>
#include "main.h"

/**
* _atoi - Convert a string to an integer.
*
* Description: Convert a string to an integer.
*
* @s: Starting
*
* Return: Always 0
*
*/

int _atoi(char *s)
{
	int i;
	int negative = 1;
	unsigned int integer = 0;
	int done = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '-')
			negative = negative * -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			integer = (integer * 10) + s[i] - '0';
			done = 1;
		}
		else if (done == 1)
			break;
	}

	integer = integer * negative;
	return (integer);
}

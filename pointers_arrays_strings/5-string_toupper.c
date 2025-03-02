#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
* string_toupper - Lowercase letters of a string to uppercase.
*
* Description: Lowercase letters of a string to uppercase.
*
* @a: Starting
*
* Return: Always 0
*
*/

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}

	return (a);
}

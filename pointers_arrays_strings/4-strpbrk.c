#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: string to check
 * @accept: characters to search for
 *
 * Return: ('\0') (s)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{

		for (i = 0; accept[i]; i++)
		{

			if (*s == accept[i])
			{

				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _size - Calculates length
 * @j: replace strlen
 * Return: j
 */


int _size(char *j)
{
	int j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	return (j);
}
/**
 * _strdup - Copy string
 * @str: char pointer
 * Return: char pointer
 */

char *_strdup(char *str)
{
	if (str != NULL)
	{
		char *p;

		unsigned long s;

		int i;

		p = (char *)malloc(sizeof(char) * (s + 1));
		if (p != NULL)
		{
			i = 0;
			while (str[i])
			{
				p[i] = str[i];
				i++;
			}

			return (p);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{

		return (NULL);
	}
}

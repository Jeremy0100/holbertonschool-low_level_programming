#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _size - Calculates length
 * @j: A pointer to the string.
 *
 * Return: The length of the string.
 */
int _size(char *s)
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
	int i;
	char *p = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	p = malloc((_size(str) + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}

	return (p);
}

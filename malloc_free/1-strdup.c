#include <string.h>
#include "main.h"

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

		s = strlen(str);
		p = (char *)malloc(sizeof(char) * s + 1);
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

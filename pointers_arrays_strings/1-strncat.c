#include <stdio.h>
#include "main.h"

/**
* _strncat - Concatenates two strings.
*
* Description: Concatenates two strings.
*
* @src: append to dest
* @dest: Starting
* @n: integer
* Return: Always 0
*
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;


	while (dest[i] != '\0')
	{
		i++;
	}


	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

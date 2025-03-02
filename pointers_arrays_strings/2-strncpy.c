#include <stdio.h>
#include "main.h"

/**
* _strncpy - Copies a string.
*
* Description: Copies a string.
*
* @n: Starting
* @src: the source string
* @dest: The destination
* Return: Always 0
*
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; n > i; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

#include <stdio.h>
#include "main.h"

/**
* _strcpy - copies the string pointed to by src
*
* Description: including the terminating null byte\0 to buffer
*		pointed to by dest.
*
* @dest: pointed
* @src: Starting
* Return: Always 0
*
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

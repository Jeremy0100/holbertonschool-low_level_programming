#include <stdio.h>
#include "main.h"

/**
* _strlen - Returns the lenght of a string.
*
* Description: Return the lenght of a string.
*
* @s: Starting
*
* Return: Always 0
*
*/

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}

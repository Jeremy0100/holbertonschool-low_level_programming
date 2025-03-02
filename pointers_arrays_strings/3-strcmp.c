#include <stdio.h>
#include "main.h"

/**
* _strcmp - Compares two strings.
*
* Description: Compares two strings.
*
* @s1: Starting
* @s2: Second
* Return: 0 if success
*
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

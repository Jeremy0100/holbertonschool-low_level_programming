#include <stdio.h>
#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
*
* Description: Capitalizes all words of a string.
*
* @c: Starting
*
* Return: Always 0
*
*/


char *cap_string(char *c)
{
	int i = 0;
	int j;
	char chara[] = " \n\t,;.!?\"(){}";


	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] -= 32;

	for (; c[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (c[i] == chara[j])
			{
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
					c[i + 1] -= 32;
			}
		}
	}

	return (c);
}

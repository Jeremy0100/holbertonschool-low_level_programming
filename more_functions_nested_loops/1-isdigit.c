#include "main.h"
#include <stdio.h>

/**
* _isdigit - Checks for a digit (0 through 9)
*
* Description: Checks for a digit (0 through 9).
*
* @c: if uppercase
*
* Return: 1 if c is a digit
*
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

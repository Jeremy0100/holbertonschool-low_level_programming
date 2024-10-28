#include <stdio.h>
#include "main.h"

/**
* _isdigit - Checks for a digit (0 through 9)
*
* Description: Checks for a digit (0 through 9)
*
* @c: Starting
*
* Return: 1 is c is a digit
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

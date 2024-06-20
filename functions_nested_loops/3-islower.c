#include <stdio.h>

/**
 * _islower - begining
 *
 * Description: program
 *
 * @c: is input
 *
 * Return: 0 ends the program
 */

#include "main.h"

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

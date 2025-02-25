#include <stdio.h>
#include "main.h"

/**
* swap_int - Swaps the values of two integers.
*
* Description: Swaps the values of two integers.
*
* @a: Last
* @b: Starting
*
* Return: Always 0
*
*/


void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

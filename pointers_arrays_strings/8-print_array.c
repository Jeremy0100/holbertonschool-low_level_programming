#include <stdio.h>
#include "main.h"

/**
* print_array - Prints n elements of an array of integers.
*
* Description: Prints n elements of an array of integers.
*
* @a: Starting
* @n: integer
*
* Return: Always 0
*
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

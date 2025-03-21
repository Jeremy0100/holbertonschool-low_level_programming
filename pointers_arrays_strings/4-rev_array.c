#include <stdio.h>
#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers.
*
* Description: Reverses the content of an array of integers.
*
* @n: Starting
* @a: Starting2
*
* Return: Always 0
*
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}

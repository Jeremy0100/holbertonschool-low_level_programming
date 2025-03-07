#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 *
 * prints the sum
 *
 */

void print_diagsums(int *a, int size)
{
	int i, cumul = 0;

	for (i = 0; i < (size * size); i += size + 1)
		cumul = cumul + a[i];
	printf("%d, ", cumul);

	cumul = 0;
	for (i = size ; i < (size * size); i += size - 1)
		cumul = cumul + a[i - 1];
	printf("%d\n", cumul);
}


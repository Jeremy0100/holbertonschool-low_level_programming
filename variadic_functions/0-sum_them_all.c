#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 *
 * @n: number of arguments
 * Return: sum of variable arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum;

	va_list mathlist;


	va_start(mathlist, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(mathlist, int);

	va_end(mathlist);
	return (sum);
}

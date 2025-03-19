#include <stddef.h>
#include <stdio.h>

/**
 * int_index - function searching for an integer
 *
 * @size: size
 * @cmp: pointer
 * @array: pointer to array
 *
 * Return: integer or -1 when no element matches
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}

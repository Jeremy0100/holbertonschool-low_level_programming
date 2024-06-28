#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int height, wid;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (height == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}

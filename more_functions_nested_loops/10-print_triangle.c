#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int space, index;

	if (size > 0)
	{
		for (space = 1; space <= size; space++)
		{
			for (index = size - space; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < space; index++)
				_putchar('#');

			if (space == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

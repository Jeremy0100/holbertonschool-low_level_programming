#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Print in rev
 * @s: Pointer to a string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Description: Prints _putchar, followed by a new line
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
	int i;
	char chainput[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(chainput[i]);
	}

	_putchar('\n');
	return (0);
}

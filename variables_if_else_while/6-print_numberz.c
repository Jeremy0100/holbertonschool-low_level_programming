#include <stdio.h>

/**
* main - Entry point
*
* Description : 'Prints all digit numbers of base 10 from 0
*		in another way.'
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}

	putchar('\n');
	return (0);
}

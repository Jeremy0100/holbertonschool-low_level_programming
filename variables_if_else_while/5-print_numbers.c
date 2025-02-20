#include <stdio.h>

/**
* main - Entry point
*
* Description : 'Prints all digit numbers of base 10 from 0.'
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}

	putchar('\n');
	return (0);
}

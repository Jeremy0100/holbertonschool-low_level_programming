#include <stdio.h>
#include "main.h"

/**
* main - prints numb. from 1 to 100 Show if they are multiples of three or five
*
* Description: Fizz for multiples of 3, Buzz for multiples of 5,
*		FizzBuzz for both.
*
* Return: Always 0
*
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}

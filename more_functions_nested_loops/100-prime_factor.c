#include <stdio.h>

/**
* main - prints the largest prime factor of number 612852475143
*
* Description: Prints the largest prime factor of number 612852475143
*
* Return: Always 0
*
*/

int main(void)
{
	long i, number = 612852475143;

	for (i  = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}

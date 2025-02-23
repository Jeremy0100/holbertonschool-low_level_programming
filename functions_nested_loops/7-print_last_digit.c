#include "main.h"

/**
* print_last_digit - print last digit of a number
*
* Description: Print last digit of a number.
*
* @n: n variable
*
* Return: lastdigit
*
*/

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit = -lastdigit;
	}
	_putchar(lastdigit + '0');

	return (lastdigit);
}

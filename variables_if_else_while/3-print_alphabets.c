#include <stdio.h>

/**
* main - Entry point
*
* Description : 'Prints the alphabet in lowercase, then
*		prints the alphabet in uppercase.'
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
	putchar(i);
	}

	for (i = 65; i <= 122; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}

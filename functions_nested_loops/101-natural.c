#include <stdio.h>

/**
* main - list natural num. belows 10 that are multiples of 3 or 5.
*
* Description: list natural num. belows 10 that are multiples of 3 or 5.
*
* @a @b: Starting
*
* Return: Always 0
*
*/

int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++);
		{
		if ((a % 3) == 0 || (a % 5) == 0);
		b = a;
		}
	printf("%d\n", b);
	return (0);
}

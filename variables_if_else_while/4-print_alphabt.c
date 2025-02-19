#include <stdio.h>

/**
* main - Entry point
*
* Description : 'Prints the alphabet in lowercase, except
*		q and e.'
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char letter;

	for (i = 97; i <= 122; i++)
	{
		letter = i;
		if (letter != 'q' && letter != 'e')
	{
			putchar(letter);
	}
	}
	putchar('\n');
	return (0);
}

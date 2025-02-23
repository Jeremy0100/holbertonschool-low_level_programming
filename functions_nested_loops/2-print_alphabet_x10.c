#include "main.h"

/**
* print_alphabet_x10 - print alphabet 10 times
*
* Description: Prints the alphabet 10 times, in lowercase.
*
* Return: Nothing
*
*/

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

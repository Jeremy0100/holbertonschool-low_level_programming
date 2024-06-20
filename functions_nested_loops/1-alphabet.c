#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 *int main(void)
 *{
 *print_alphabet();
 *return (0);
 *}

#include "main.h"
/**
* print_alphabet - Entry point
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
		_putchar(letter);
	_putchar('\n');
}

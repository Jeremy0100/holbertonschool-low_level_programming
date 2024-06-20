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

char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{

_putchar(alphabet);
}
_putchar('\n');
}

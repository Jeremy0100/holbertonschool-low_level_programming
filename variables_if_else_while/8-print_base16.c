#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num;
char letter;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);

putchar('\n');
return (0);
}

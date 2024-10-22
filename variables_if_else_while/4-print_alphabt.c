#include <stdio.h>

/**
* main - Entry point
*
* Description: prints the alphabet in lowercase, followed by new line
*
* Return: Always 0 (Success)
*
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

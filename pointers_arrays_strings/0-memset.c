#include "main.h"
/**
 * *_memset - copies memory area
 *@s: memory area
 *@b: constant byte
 *@n: n bytes from memory
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}

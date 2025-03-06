#include "main.h"
/**
 * *_memcpy - Copy string (memory area)
 *@dest: destination
 *@src: source
 *@n: n bytes from memory
 *Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

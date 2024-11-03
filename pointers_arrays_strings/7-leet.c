/**
* leet - Encodes a string into 1337.
*
* Description: Encodes a string into 1337.
*
* @s: Starting
*
* Return: Pointer to string
*
*/

char *leet(char *s)
{
	char *point = s;
	char a[] = { 'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char c[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
				*s = c[i] + '0';
		}
		s++;
	}
	return (point);
}

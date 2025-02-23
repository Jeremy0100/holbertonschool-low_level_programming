#include "main.h"

/**
* _isalpha - check if alphabet
*
* Description: Checks for lowercase character, if alphabet is
*		rather lowercase or uppercase.
*
* @c: c variable
*
* Return: 1 if c is a letter, 0 otherwise
*
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}

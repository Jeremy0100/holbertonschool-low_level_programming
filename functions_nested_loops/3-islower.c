#include "main.h"

/**
* _islower - check lowercase
*
* Description: Checks for lowercase character.
*
* @c: c variable
*
* Return: Nothing
*
*/

int _islower(int c)  /* c variable */
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

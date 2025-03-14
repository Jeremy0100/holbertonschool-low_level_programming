#include "main.h"
#include "stddef.h"
#include "stdlib.h"
#include "string.h"


/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size of array
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * nmemb);

	if (arr != NULL)
	{

		return (memset(arr, 0, size * nmemb));
	}

	return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int n, r, d;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	r = atoi(argv[2]);
	d = n * r;

	printf("%i\n", d);

	return (0);
}

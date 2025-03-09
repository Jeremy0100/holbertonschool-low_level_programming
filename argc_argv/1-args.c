#include <stdio.h>
/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

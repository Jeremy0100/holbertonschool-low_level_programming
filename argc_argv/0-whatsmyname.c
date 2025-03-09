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
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[0]);
		break;
	}
	return (0);
}

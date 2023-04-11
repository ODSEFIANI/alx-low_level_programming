#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: number of argument
 * @argv: argument array
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(EXIT_SUCCESS);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes
 * @argc: arguments count
 * @argv: double pointer to arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, n;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < n; i++)
	{
		printf("%02hhx ", arr[i]);
	}
	printf("\n");
	return (0);
}

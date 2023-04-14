#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: number of the argument
 * @argv: argument of the array
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int a, b, i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (argv[2][i] < '0' || argv[2][i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * check - check if a symbol in a string
 * @s: the string
 * Return: 1 if no symbols else 0.
 */
int check(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}
/**
 * main - check the code
 * @argc: number of argument
 * @argv: argument array
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, res;

	res = 0;
	if (argc == 1)
	{
		printf("%d\n", res);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (check(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}

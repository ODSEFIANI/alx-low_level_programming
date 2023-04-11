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
	int i, cents, res;
	int arr[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	i = 0;
	res = 0;
	while (cents > 0)
	{
		if (cents >= arr[i])
		{
			cents -= arr[i];
			res++;
		}
		else
			i++;
	}
	printf("%d\n", res);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * check - check if a symbol in a string
 * @s: the string
 *
 * Return: 0 if no symbols else 1.
 */
/**
 * main - check the code
 * @argc: number of argument
 * @argv: argument array
 *
 * Return: 0 if success, 1 otherwise.
 */
int main(int argc, char **argv)
{
    int k;
    int i = 0;
    int res = 0;
    int coins[] = {25, 10, 5, 2, 1};

    if (argc != 2)
    {
        printf("Error\n");
        return (EXIT_FAILURE);
    }

    k = atoi(argv[1]);

    if (k <= 0)
    {
        printf("0\n");
        return (0);
    }

    while (k >= 0 && i < 5)
    {
        if (k >= coins[i])
        {
            k -= coins[i];
            res++;
        }
        else
        {
            i++;
        }
    }

    printf("%d\n", res);

    return (0);
}


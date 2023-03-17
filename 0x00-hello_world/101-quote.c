#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str1[31] = "and that piece of art is useful";
	char str2[28] = "\" - Dora Korpar, 2015-10-19\n";
	int i;

	for (i = 0; i < 31; i++)
		putchar(str1[i]);
	for (i = 0; i < 28; i++)
		putchar(str2[i]);
	return (1);
}

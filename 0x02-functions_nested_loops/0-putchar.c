#include "main.h"

/**
 * main - Entry point
 * Description: 'prints _putchar to stdout'
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int sh;
		for (sh=0 ; sh<8 ; sh++)
			_putchar(str[sh]);
		_putchar('\n');
	return (0);

}


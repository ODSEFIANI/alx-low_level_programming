#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string.
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int n = strlen(s);
	char c;

	for (i = 0; i < n / 2; i++)
	{
		c = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = c;
	}
}

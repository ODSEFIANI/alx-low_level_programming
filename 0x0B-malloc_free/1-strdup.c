#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: the string
 *
 * Return: duplicated string.
 */
char *_strdup(char *str)
{
	int i, n;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		n++;
	s = (char *)malloc(sizeof(char) * (n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	int i, n, m;
	char *str;

	n = 0;
	m = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		n++;
	for (i = 0; s2[i] != '\0'; i++)
		m++;
	str = (char *)malloc(sizeof(char) * (m + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (i = n; s2[i - n] != '\0'; i++)
		str[i] = s2[i - n];
	str[i] = '\0';
	return (str);
}

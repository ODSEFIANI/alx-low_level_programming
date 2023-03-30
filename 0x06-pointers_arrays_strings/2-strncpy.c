#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination
 * @src: source
 * @n: number if bytes
 * Return: concatenation
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

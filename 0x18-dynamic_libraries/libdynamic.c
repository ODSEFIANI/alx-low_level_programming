#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _islower - is a character lowercase
 * @c: The character to test
 * Return: 1 if lowercase. else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
/**
 * _isalpha - is a character an alphabets
 * @c: The character to test
 * Return: 1 if alpha. else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
/**
 * _abs - computes the absolute value of an integer.
 * @n: the number to calc
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
/**
 * _isupper -  checks for uppercase character
 * @c: the character
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
/**
 * _isdigit -  checks for a digit
 * @c: the digit
 * Return: 1 if a digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/**
 * _strlen - returns the length of a string.
 * @s: the string
 * Return: the length of s
 */
int _strlen(char *s)
{
	return (strlen(s));
}
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: the string
 * Return: void
 */

void _puts(char *str)
{
	puts(str);
}
/**
 * _strcpy - copies the string pointed to by src
 * @dest: the destination
 * @src: the source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
/**
 * _atoi - convert a string to an integer.
 * @s: the string
 * Return: the integer
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
/**
 * _strcat - concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: concatenation
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int l = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l] = src[i];
		l++;
	}
	return (dest);
}
/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: number if bytes
 * Return: concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
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
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/**
 * _strcmp - compares two strings.
 * @s1: destination
 * @s2: source
 * Return: comparation
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the start of the memory
 * @b: the character
 * @n: number of bytes
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _memcpy - copies memory area.
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s;
		s++;
		if (i == c)
			return (s - 1);
		if (i == 0)
			return (NULL);
	}
}
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string
 * @accept: the character
 * Return: pointer to the first occurrence of the character c
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i, j, k;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				k = 1;
				break;
			}
		}
		if (k == 1)
			k = 0;
		else
			break;
	}
	return (n);
}
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string
 * @accept: set of bytes
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
/**
 * _strstr - locates a substring.
 * @haystack: the string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}

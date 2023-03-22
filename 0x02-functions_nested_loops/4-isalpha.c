#include "main.h"
/* more headers goes there */

/**
 * _isalpha - is a character an alphabets
 *
 * @c: The character to test
 *
 * Return: 1 if alpha. else 0
 *
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

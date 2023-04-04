#include "main.h"
#include <stdio.h>

/**
 * set_string -  sets the value of a pointer to a char.
 * @s: the pointer to a char
 * @to: the value
 *
 * Return: pointer to the beginning of the located substring
 */
void set_string(char **s, char *to)
{
	*s = to;
}

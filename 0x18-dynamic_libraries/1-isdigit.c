#include <stdio.h>
#include "main.h"
/**
* _isdigit -  checks for a digit
* @c: the digit
*
* Return: 1 if a digit else 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

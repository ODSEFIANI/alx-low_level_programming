#include "main.h"

/**
 * get_endianness - checks if a machine is in little or big endian
 * Return: zero for big & one for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *a = (char *) &i;

	return (*a);
}

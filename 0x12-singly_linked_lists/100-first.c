#include "lists.h"
#include<stdio.h>
/**
 * first - the funtion prints before main
 *
 * Return: void
 */
void first(void) __attribute__ ((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

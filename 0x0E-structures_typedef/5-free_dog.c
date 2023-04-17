#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - deallocates dogs structur
 * @d: pointer to the dog structer that we will free
 *
 * Return: void
 * */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free(d->owner);
		free(d);
	}
}


#include "dog.h"

/**
 * init_dog - initilalize a variable of type struct dog
 *
 * Return: void.
 */ 
void init_dog(struct dog *d, char *name, float age, char *owner)
{
  if (d != NULL) {
    (d*).name = name;
    (d*).age = age;
    (d*).owner = owner;
  }
}
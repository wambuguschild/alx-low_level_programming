#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free struct dog
 * @d: pointer to stuct dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(d);
	}
}

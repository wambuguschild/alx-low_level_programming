#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free struct dog
 * @d: pointer to struct dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

		free(dog->name);
		free(dog->owner);
		free(d);
}

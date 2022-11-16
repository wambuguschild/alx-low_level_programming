#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocted for struct dog
 * @d: struct dog to free
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

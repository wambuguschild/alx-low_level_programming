#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j, k;
	char *n, *o;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * (i + 1));
	if (n == NULL)
	{
		free(dog);
		return (NULL);
	}
	o = malloc(sizeof(char) * (j + 1));
	if (o == NULL)
	{
		free(n);
		free(dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	dog->name = n;
	dog->age = age;
	dog->owner = o;

	return (dog);
}

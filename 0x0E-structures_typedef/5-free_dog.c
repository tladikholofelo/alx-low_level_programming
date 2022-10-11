#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs, memory of dogs
 * @d: pointer to dogs to be free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* free the dog memeber pointers */
	free(d->name);
	free(d->owner);

	/* free dog pointer */
	free(d);
}

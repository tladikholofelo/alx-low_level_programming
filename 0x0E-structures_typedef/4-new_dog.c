#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
char *_strdup(char *str);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * You have to store a copy of name and owner
 *
 * Return: pointer to the new dog
 * Upon failure, NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d; /* declare new dog pointer */
	char *dog_name, *dog_owner;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	dog_name = _strdup(name);
	if (dog_name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->name = dog_name;

	d->age = age;

	dog_owner = _strdup(owner);
	if (dog_owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->owner = dog_owner;

	return (d);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string
 *
 * Return: a pointer to the duplicate string.
 * Or else, NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *dog;
	int i, size;

	if (str == NULL)
		return (NULL);

	/* determine the length of the string */
	size = 0;

	for (i = 0; str[i] != '\0'; i++)
		size++;

	dog = malloc(sizeof(char) * (size + 1));

	if (dog == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dog[i] = str[i];

	dog[size] = '\0';
	return (dog);
}

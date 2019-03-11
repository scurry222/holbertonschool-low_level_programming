#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * *_strcpy - copies a string to a new buffer
 * @dest: destination for copy
 * @src: source
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog using type dog_t
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	poppy = malloc(sizeof(struct dog));
	if (poppy == NULL)
		return (NULL);

	poppy->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (poppy->name == NULL)
	{
		free(poppy);
		return (NULL);
	}

	poppy->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (poppy->owner == NULL)
	{
		free(poppy->name);
		free(poppy);
		return (NULL);
	}

	_strcpy(poppy->name, name);
	poppy->age = age;
	_strcpy(poppy->owner, owner);

	return (poppy);
}

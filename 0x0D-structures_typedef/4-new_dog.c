#include "dog.h"
#include "holberton.h"
#include <stdlib.h>
char *_strdup(char *str);
/**
 * new_dog - initializes pointer of typedef dog_t'
 * @name: name of dog
 * @age: a float representing dog's age
 * @owner: owner's name
 * Return: pointer to dog_t struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snooby;

	snooby = malloc(sizeof(dog_t));
	if (snooby == NULL)
		return (NULL);

	snooby->name = _strdup(name);
	if (name != NULL && snooby->name == NULL)
	{
		free(snooby);
		return (NULL);
	}

	snooby->owner = _strdup(owner);
	if (owner != NULL && snooby->owner == NULL)
	{
		free(snooby->name);
		free(snooby);
		return (NULL);
	}
	snooby->age = age;
	return (snooby);
}


char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *s;

	if (!str)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;
	size++;
	s = malloc(sizeof(char) * size);
	if (s)
	{
		for (i = 0; i < size; i++)
			s[i] = str[i];
	}
	else
		return (NULL);
	return (s);
}

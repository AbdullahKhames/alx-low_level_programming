#include "dog.h"
#include <stdlib.h>

/**
 * _stringlen - len
 * @s: s
 * Return: retunrs length
 */

int _stringlen(const char *s)
{
	int length = 0;

	for (; *s; s++)
		length++;
	return (length);
}

/**
 * _stringcopy - copies str
 * @dest: destination string
 * @source: source string
 * Return: returns copy of a string
 */

char *_stringcopy(char *dest, char *source)
{
	int j;

	for (j = 0; source[j]; j++)
		dest[j] = source[j];
	dest[j] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *newDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(char) * (_stringlen(name) + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (_stringlen(owner) + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->name = _stringcopy(newDog->name, name);
	newDog->age = age;
	newDog->owner = _stringcopy(newDog->owner, owner);

	return (newDog);


}

#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - structure type
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: new_dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(_strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	else
		_strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = malloc(_strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	else
		_strcpy(new_dog->owner, owner);
	return (new_dog);
}
/**
 * _strlen - finds the lenght of a string
 * @str: string
 * Return: returns the length of str
 */
int _strlen(char *str)
{
	if (!(*str))
		return (0);
	else
		return (1 + _strlen(str + 1));
}
/**
 * _strcpy - copies the contents of src to dest
 * @src: source
 * @dest: destination
 * Return: character pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

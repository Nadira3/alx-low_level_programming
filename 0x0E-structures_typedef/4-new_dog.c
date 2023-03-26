#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * dog_t new_dog - structure type
 * @name: name of dog
 * age: age of dog
 * @owner: name of owner
 */
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog = {name, age, owner};
	char *new_name;
	char *new_owner;

	new_name = malloc(_strlen(name) + 1);
	if (new_name == NULL)
		return (NULL);
	else
		_strcpy(new_name, name);
	new_owner = malloc(_strlen(owner) + 1);
	if (new_owner == NULL)
		return (NULL);
	else
		_strcpy(new_owner, owner);
	return (new_dog == NULL ? NULL : new_dog);
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
		return (1 + _strlen(str));
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

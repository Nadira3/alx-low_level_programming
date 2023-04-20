#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes of the new memory block
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		ptr_new = malloc(new_size);
		if (!ptr_new)
		{
			free(ptr_new);
			return (0);
		}
		free(ptr);
		return (ptr_new);
	}
	else
	{
		if (new_size <= 0)
		{
			free(ptr);
			return (0);
		}
		else
		{
			ptr_new = malloc(new_size);
			if (!ptr_new)
			{
				free(ptr_new);
				return (0);
			}
			if (new_size > old_size)
				dup(ptr, ptr_new);
			else
				dupn(ptr, ptr_new, old_size);

		}
	}
	if (ptr)
		free(ptr);
	return (ptr_new);
}
/**
 * dup - copies content of one memory block to another
 * @s: old memory
 * @t: new memory
 */
void dup(char *s, char *t)
{
	if (!*s)
		return;
	if (*s)
		*t = *s;
	s++;
	t++;
	dup(s, t);
}
/**
 * dupn - copies content of one memory block to another
 * @s: old memory
 * @t: new memory
 * @size: number of bytes to be copied
 */
void dupn(char *s, char *t, int size)
{
	if (size == 0)
		return;
	if (*s)
		*t = *s;
	s++;
	t++;
	dupn(s, t, size - 1);

}

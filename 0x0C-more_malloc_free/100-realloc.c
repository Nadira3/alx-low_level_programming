#include <stdlib.h>
#include <stdio.h>
/**
 * dup - copies content of one memory block to another
 * @s: old memory
 * @t: new memory
 * Return: character pointer
 */
void dup(char *s, char *t)
{
	if (!*s)
	{
		return;
	}
	if (*s)
		*t = *s;
	s++;
	t++;
	dup(s, t);

}
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;

	if (new_size == old_size)
		return (ptr);
	ptr_new = malloc(new_size);
	if (new_size <= 0)
	{
		free(ptr);
		return (0);
	}
	if (!ptr_new)
		free(ptr_new);
	if (ptr_new)
		dup(ptr, ptr_new);
	free(ptr);
	return (ptr_new);
}

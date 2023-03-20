#include "main.h"
/**
 * newLess - reallocates a block of memory if new size is less than old
 * @ptr: pointer to the memory previously allocated with a
 * call to malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 * Return: pointer to new block
 */
char *newLess(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *int_ptr;
	char *char_ptr;

	if (!(old_size % sizeof(int)))
	{
		int_ptr = (int *)ptr;
		int_ptr = int_ptr + new_size;
		while (*int_ptr)
		{
			free(int_ptr);
			int_ptr++;
		}
	}
	else
	{
		char_ptr = (char *)ptr;
		char_ptr = char_ptr + new_size;
		while (*char_ptr)
		{
			free(char_ptr);
			char_ptr++;
		}
	}
	return (ptr);
}
/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to the memory previously allocated with a
 * call to malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 * Return: pointer to new block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *alloc;
	int *int_ptr;
	char *char_ptr;

	if (new_size == old_size)
		alloc = ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL || new_size > old_size)
	{
		alloc = malloc(new_size);
		if (alloc == NULL)
			return (NULL);
	}
	int_ptr = (int *)alloc;
	char_ptr = (char *)alloc;
	if (new_size < old_size)
		alloc = newLess(ptr, old_size, new_size);
	if (new_size > old_size)
	{
		alloc = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			if (!(old_size % sizeof(int)))
				int_ptr[i] = 0;
			else
				char_ptr[i] = 0;
		}
	}
	else
	{
		for (i = 0; i < new_size; i++)
		{
			if (!(old_size % sizeof(int)))
				int_ptr[i] = 0;
			else
				char_ptr[i] = 0;
		}
	}
	free(ptr);
	return (alloc);
}

#include "main.h"
/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to the memory previously allocated with a 
 * call to malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j;
	void *alloc;
	int *int_ptr;

	if (new_size == 0 && ptr != NULL)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	alloc = malloc(sizeof(int) * newsize);
	if (alloc == NULL)
		return (NULL);
	int_ptr = (int *)alloc;
	for (i = 0; i < oldsize; i++)
		int_ptr[i] = 0;
	return (alloc);
	free(ptr);

}

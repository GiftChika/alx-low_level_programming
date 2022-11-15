#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr:memory block to be assigned
 * @new_size: original allocated memory size for ptr
 * @old_size: original allocated memory size for ptr
 * Return: reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_new, *fill_mem;
	unsigned int i;

	/* set condition for when new mem and old mem block are the same */
	if (new_size == old_size)
		return (ptr);
	/* if ptr memory block points to 0 */
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		/* terminating consition if malloc fails */
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	/* create a copy to store address and value of old memory block */
	ptr_new = ptr;

	mem = malloc(sizeof(*ptr_new) * new_size);
	if (mem == NULL)
		free(ptr);
	/* access mem block items */
	fill_mem = mem;
	for (i = 0; i < old_size && i < new_size; i++)
		       fill_mem[i] = *ptr_new++;

	free(ptr);
	return (mem);
}


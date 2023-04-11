#include "main.h"
#include <stdlib.h>
/**
 * create_array-creates an array of chars
 * @size:int variable
 * @c:char variable
 * Return:char pointer
 */
char *create_array(unsigned int size, char c)
{
	int *ptr = (int *)malloc(size * sizeof(int));
	int i;

	if (size == 0)
		return NULL;

	for (i = 0; i < size; i++)
		ptr[i] = c;
	
	return (ptr);

}

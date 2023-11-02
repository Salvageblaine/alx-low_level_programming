#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allcoates memory using malloc
 * @b: the size of memory
 * Return: pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{	char *output;

	output = malloc(b);
	if (ouput == NULL)
		exit(98);
	else
		return (output);
}

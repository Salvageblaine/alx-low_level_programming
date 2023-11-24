#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: index starting from zero
 * @index: index starting from zero of the bit required
 *
 * Return: The converted value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}

#include "main.h"

/**
 * flip_bits - gets the number of bits that's needed to be flipped
 * @n: initial number
 * @m: final number
 *
 * Return: the number of the flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped - n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
	}
	return (count);
}

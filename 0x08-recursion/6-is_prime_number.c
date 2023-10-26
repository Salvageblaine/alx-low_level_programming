#include "main.h"
int actual_prime_number(int n, int i);
/**
 * is_prime_number - this is the main function name
 * @n: the number to be evaluated
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - calculating recursive prime numbers
 * @n: number needing evaluation
 * @i: Iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime_number(n, n - 1));
}

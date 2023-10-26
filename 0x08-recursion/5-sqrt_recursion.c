#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - this is the main function name
 * @n: the function parameter to get the root
 *
 * Return: the output of the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - finding natural by recursing
 * square root of a number
 * @n: number to calculate the square root
 * @i: Iterator
 *
 * Return: the output of the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}


#include "main.h"
/**
 * _print_rev_recursion - this is the main function
 *
 * @s: The function parameter
 *
 * Return: a string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

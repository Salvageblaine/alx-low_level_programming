#include "main.h"
/**
 * _strlen_recursion - this is the main function
 *
 * @s: Function parameter
 *
 * Return: a string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

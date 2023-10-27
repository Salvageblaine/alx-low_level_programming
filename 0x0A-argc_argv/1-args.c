#include <stdio.h>
/**
 * main - a program that prints a number
 *
 * @argc: argument counts
 *
 * @argv: argument vectors
 * Return: (0) when successful
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

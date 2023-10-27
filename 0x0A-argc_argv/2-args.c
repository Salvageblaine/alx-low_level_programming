#include <stdio.h>
/**
 * main - a program that prints all arguments
 *
 * @argc: argument counts
 * @argv: argument vectors
 *
 * Return: (0) success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

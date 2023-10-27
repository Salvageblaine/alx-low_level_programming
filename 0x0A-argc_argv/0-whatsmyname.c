#include <stdio.h>
/**
 * main - print a name followed by a new line
 *
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: (0) when succesful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

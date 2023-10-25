#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = !(1);
	printf("%d\n", r);
	r = !(5);
	printf("%d\n", r);
	r = !(10);
	printf("%d\n", r);
	r = !(-1024);
	printf("%d\n", r);
	return (0);
}

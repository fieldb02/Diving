#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int h, i, j, k, l;

	h = 1;
	i = 12;
	j = 123;
	k = 1234;
	l = 12345;
	printf("%8d %-8d", h, h);
	putchar(10);
	printf("%8d %-8d", i, i);
	putchar(10);
	printf("%8d %-8d", j, j);
	putchar(10);
	printf("%8d %-8d", k, k);
	putchar(10);
	printf("%8d %-8d", l, l);
	putchar(10);
	return (0);
}

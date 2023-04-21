#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y, z;

	x = 1;
	y = 3;
	z = 10;
	printf("Given x = %d, y = %d, z = %d", x, y, z);
	putchar(10);
	x = x + y;
	printf("x = x + y assigns %d to x", x);
	putchar(10);
	x = 1; /* reset x */
	x += y;
	printf("x += y assigns %d to x", x);
	putchar(10);
	x = 1; /* reset x */
	z = z * x + y;
	printf("z = z * x + y assigns %d to z", z);
	putchar(10);
	z = 10; /* reset z */
	z = z * (x + y);
	printf("z = z * (x + y) assigns %d, to z", z);
	putchar(10);
	z = 10; /* reset z */
	z *= x + y;
	printf("z *= x + y assigns %d to z", z);
	putchar(10);
	return (0);
}

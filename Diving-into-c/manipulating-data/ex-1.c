#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;

	x = 1;
	y = 3;
	printf("Given that X = %d and y = %d", x, y);
	putchar(10);
	x += y;
	printf("x += y equals to %d", x);
	putchar(10);
	x = 1;
	x += -y;
	printf("x += -y equals to %d", x);
	putchar(10);
	x = 1;
	x -= -y;
	printf("x -= -y equals to %d", x);
	putchar(10);
	x = 1;
	x *= -y;
	printf("x *= -y equals to %d", x);
	putchar(10);
	return (0);
}

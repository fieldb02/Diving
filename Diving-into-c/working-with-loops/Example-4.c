/*testing the %d specifier*/
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int multiply;

	i = 10;
	j = 10;
	for (i = 0, j = 0; i <= 10, j <= 10; i++, j++)
	{
		multiply = j * i;
		printf("%d * %d = %d", j, i, multiply);
		putchar(10);
	}
	return (10);
}

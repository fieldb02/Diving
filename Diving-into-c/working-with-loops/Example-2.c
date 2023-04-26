/*do-while loop*/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 65;
	do {
		printf("This is loop %d and it's numerics value is %c", i, i);
		putchar(10);
		i++;
	} while (i < 80);
	return (0);
}

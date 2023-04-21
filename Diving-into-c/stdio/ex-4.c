#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	printf("Please type a character: ");
	i = getchar();
	putchar(i);
	putchar(10);
	return (0);
}

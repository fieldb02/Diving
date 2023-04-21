/*Specifying the minimum field width*/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	i = 12;
	j = 1234;
	printf("%i\n", i);
	printf("%i\n", j);
	printf("%5i\n", i);
	printf("%05i\n", i);
	printf("%2i\n", j);
	return (0);
}

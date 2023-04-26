/*Initializing an array*/
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int list_int[10];

	for (i = 0; i < 10; i++)
	{
		list_int[i] = i + 1;
		printf("list_int[%d] is initialized with %d", i, list_int[i]);
		putchar(10);
	}
	return (0);
}

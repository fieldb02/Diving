#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	printf("Please type in one character: \n");
	i = getc(stdin);
	printf("The character you entered is: %c\n", i);
	return (0);
}

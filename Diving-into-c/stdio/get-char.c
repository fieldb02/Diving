#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	printf("Input two characters: \n");
	i = getc(stdin);
	j = getchar();
	printf("Your first character input is: %c\n", i);
	printf("Your second character input is: %c\n", j);
	return (0);
}

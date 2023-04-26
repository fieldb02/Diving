#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	printf("Enter a character: (enter x to exit)\n");
	while (c != 'z')
		c = getchar();
		printf("%c", c);
	putchar(10);
	printf("Out of the loop. Bye");
	putchar(10);
	return (0);
}

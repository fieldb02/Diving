/*LOOPING UNDER THE FOR LOOP*/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	printf("Hex(UPPERCASE) \t Hex(lowercase) \t Decimal\n");
	for (i = 0; i < 16; ++i)
	{
		printf("%X          \t          %x         \t          %d", i, i, i);
		putchar(10);
	}
	return (0);
}

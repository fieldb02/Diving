/*nested loops*/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	i = 3;
	j = 4;
	for (i = 0; i <= 3; i++)
	{
		printf("This is an outer loop %d of nested loops", i);
		putchar(10);
		for (j = 0; j <= 4; j++)
		{
			printf("Inner loops begins %d", j);
			putchar(10);
		}
	printf("End of the outer loop is here now %d", i);
	putchar(10);
	}
	return (0);
}

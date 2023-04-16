/* program2.c  is a function that multiplies two int*/
#include <stdio.h>
#include <stdlib.h>

/**
 * integer_multiply - Multiplies two integers
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: Always 0
 */
int integer_times(int a, int b)
{
	int result;
	result = a * b;
	return (result);
}
int main(void)
{
	int multiple;

	multiple = integer_times(5, 3);
	printf("multiple of 5 and 3 is %d\n", multiple);
	return (0);
}

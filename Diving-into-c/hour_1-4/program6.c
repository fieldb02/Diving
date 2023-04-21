/*Prints double dbl_num = 123.456 value in floating-point*/
/*and scientific notation formats*/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	double dbl_num;

	dbl_num = 123.456;
	printf("dbl_num = 123.456 in scientific notation is: %E\n", dbl_num);
	printf("dbl_num = 123.456 in floating point is: %f\n", dbl_num);
	return (0);
}

/*Declaring and assign values to pointers*/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c, *ptr_c;
	int x, *ptr_x;
	float y, *ptr_y;

	c = 'A';
	x = 7;
	y = 123.45;
	printf("c: Address = %p \t Content = %c\n", &c, c);
	printf("x: Address = %p \t Content = %d\n", &x, x);
	printf("y: Address = %p \t Content = %5.2f\n", &y, y);
	ptr_c = &c;
	ptr_x = &x;
	ptr_y = &y;
	printf("ptr_c: Address = %p \t Content = %p\n", &ptr_c, ptr_c);
	printf("*ptr_c => %c\n", *ptr_c);
	printf("ptr_x: Address = %p \t Content = %p\n", &ptr_x, ptr_x);
	printf("*ptr_x => %d\n", *ptr_x);
	printf("ptr_y: Address = %p \t Content = %p\n", &ptr_y, ptr_y);
	printf("*ptr_y => %5.2f\n", *ptr_y);
	return (0);
}

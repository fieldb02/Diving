/*seeing how addresses work in c*/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int c;
	long d;
	float e;
	long long h;

	printf("Adress: %p \t Content: %d\n", &c, c);
	printf("Adress: %p \t Content: %ld\n", &d, d);
	printf("Adress: %p \t Content: %-5.2f\n", &e, e);
	printf("Adress: %p \t Content: %lld\n", &h, h);
	return (0);
}

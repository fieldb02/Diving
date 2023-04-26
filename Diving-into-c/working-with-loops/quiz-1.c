/**can the follwing loop print out anything**/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int k = 100;

	do {
		printf("%c", k);
		k++;
		putchar(10);
	} while (k > 100);
	return (0);
}
/*Loop is wrong because it was initialized wrongly and should be corrected*/
/*since k = 100, then k > 0 and the format specifiers should be taken*/
/*k++ should be k--*/
/*into considertion */

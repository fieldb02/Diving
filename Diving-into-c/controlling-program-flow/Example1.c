/*Using the switch statement*/
/*Then introducing the break statement*/
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int day;

	printf("please enter any number bewteeen 1 to 7: ");
	day = getchar();
	switch (day)
	{
		case '1':
			printf("Day 1\n");
			break;
		case '2':
			printf("Day 2\n");
			break;
		case '3':
			printf("Day 3\n");
			break;
		case '4':
			printf("Day 4\n");
			break;
		case '5':
			printf("Day 5\n");
			break;
		case '6':
			printf("Day 6\n");
			break;
		case '7':
			printf("Day 7\n");
			break;
		default:
			printf("This number is not between 1 and 7");
			putchar(10);
			break;
	}
	return (0);
}

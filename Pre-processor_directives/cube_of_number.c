#include <stdio.h>
#define CUBE(x) (x*x*x)

/**
 * main - Entry point
 * program to find cube of a number using macro
 * Return (0)
 */

int main(void)
{
	int num = 10;

	printf("Enter a number: ");
        scanf("%d", &num);

	printf("Cube of a number = %d\n", CUBE(num));

	return (0);
}

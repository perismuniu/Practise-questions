#include <stdio.h>
#define SQUARE(x)(x*x)

/**
 * main - Entry Point
 * Find the square of a number using macro #define
 * Return (0)
 */

int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("Square of a number  = %d\n", SQUARE(num));

	return (0);
}

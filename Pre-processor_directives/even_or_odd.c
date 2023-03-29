#include <stdio.h>
#define ODD_NUMBER(x) (x & 1)

/**
 * main - Entry point
 * program to check even or odd using macro
 * Return (0)
 */

int main(void)
{
	int num;

	printf("Enter number: ");
	scanf("%d", &num);

	if (ODD_NUMBER(num))
	{
		printf("Number %d is odd\n", num);
	}
	else
	{
		printf("Number %d is even\n", num);
	}

	return (0);
}

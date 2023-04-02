#include <stdio.h>

/**
 * main - program that prints the maximum of 2 numbers.
 * Return (0) - Always success
 */

int main(void)
{
	int num1, num2;

	printf("Enter any two numbers: ");
	scanf("%d%d", &num1, &num2);

	switch (num1 > num2)
	{
		case 0:
			printf("%d is maximum\n", num2);
			break;
		case 1:
			printf("%d is maximum\n",num1);
			break;
	}
	return (0);
}

#include <stdio.h>
#define SUM(x, y)(x + y)

/**
 *Main - Entry point
 *find sum of two numbers using macro
 *Return (0)
 */

int main(void)
{
  int num1, num2;

  printf("Enter any 2 numbers: ");
  scanf("%d%d", &num1, &num2);

  printf("SUM(%d, %d) = %d\n", num1, num2, SUM(num1, num2));
	 
  return (0);
}

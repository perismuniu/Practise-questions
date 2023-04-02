#include <stdio.h>

/**
 *main - program to print day of week using switch case
 *Return Always (0) is success
 */

int main(void)
{
	int week;

	printf("Enter day of week(1 to 7):\n");
	scanf("%d", &week);

	switch (week)
	{
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
		       printf("Invalid day of the week.Day of the week should be 1 to 7\n");
	}
	return (0);
}

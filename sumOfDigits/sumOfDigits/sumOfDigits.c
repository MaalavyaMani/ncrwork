#include <stdio.h>

int main()
{
	int num, temp, sum = 0, rem;

	printf("Enter an integer\n");
	scanf_s("%d", &num);

	temp = num;

	while (temp != 0)
	{
		rem = temp % 10;
		sum = sum + rem;
		temp = temp / 10;
	}

	printf("Sum of digits of %d = %d\n", num, sum);

	getch();

	return 0;
}
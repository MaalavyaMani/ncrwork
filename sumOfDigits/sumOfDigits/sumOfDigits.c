#include <stdio.h>

int main()
{
	int number, temp, sum = 0, remainder, num;

	printf("Enter an integer\n");
	scanf_s("%d", &number);

	temp = number;

	while (temp != 0)
	{
		remainder = temp % 10;
		sum = sum + remainder;
		temp = temp / 10;
	}

	printf("Sum of digits of %d = %d\n", number, sum);

	scanf_s("%d", &num);

	return 0;
}
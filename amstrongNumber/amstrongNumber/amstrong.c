#include <stdio.h>
int main()
{
	int number, originalNumber, remainder, result = 0,num;

	printf("Enter a three digit integer: \n ");
	scanf_s("%d", &number);

	originalNumber = number;

	while (originalNumber != 0)
	{
		remainder = originalNumber % 10;
		result += remainder * remainder*remainder;
		originalNumber /= 10;
	}

	if (result == number)
		printf("\n %d is an Armstrong number", number);
	    
	else
		printf("\n %d is not an Armstrong number", number);

	scanf_s("%d", &num);
	    
	return 0;
}
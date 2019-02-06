#include <stdio.h>
#include <math.h>
int convertBinaryToDecimal(int );
int convertDecimalToBinary(int);

int main()
{
    int n,n1,n2,m;
	printf("Enter a binary number ");
	scanf_s("%d", &n);
	printf("enter a decimal number");
	scanf_s("%d", &m);
	printf("%d in binary = %d in decimal\n", n, convertBinaryToDecimal(n));
	printf("%d in decimal = %d in binary\n", m, convertDecimalToBinary(m));

	getch();
	return 0;
}

int convertBinaryToDecimal( int n1)
{
	int decimalNumber = 0, i = 0, remainder;
	while (n1 != 0)
	{
		remainder = n1 % 10;
		n1 /= 10;
		decimalNumber = decimalNumber+ remainder * pow(2, i);
		++i;
	}
	return decimalNumber;
	
}
 int convertDecimalToBinary(int n2)
{
	 int binaryNumber = 0;	int remainder, i = 1, step = 1;

	while (n2 != 0)
	{
		remainder = n2 % 2;
		
		n2 /= 2;
		binaryNumber += remainder * i;
		i *= 10;
	}
	return binaryNumber;
	
}
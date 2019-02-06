#include<stdio.h>
#include<math.h>
int convertBinaryToDecimal(int);
int main(){
	int n;
	printf("enter a binary number");
	scanf_s("%d", &n);
	printf("Hexadecimal is %x", convertBinaryToDecimal(n));
	getch();
	return 0;
}
int convertBinaryToDecimal(int n1)
{
	int decimalNumber = 0, i = 0, remainder;
	while (n1 != 0)
	{
		remainder = n1 % 10;
		n1 /= 10;
		decimalNumber = decimalNumber + remainder * pow(2, i);
		++i;
	}
	return decimalNumber;
}
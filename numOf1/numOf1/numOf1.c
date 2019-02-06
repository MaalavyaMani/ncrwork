#include <stdio.h>
int main()
{
	int num, count = 0, i, rem;
	printf("Enter any number");
	scanf_s("%d", &num);
	for (i = 0; i < 8; i++) {
		rem = num % 10;
		if (rem == 1) {
			count++;
		}
		num /= 10;
	}
	printf("Total one bit is %d", count);
	getch();
	return 0;
}
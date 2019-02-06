#include <stdio.h>


int main()
{
	int n, hex, i, k;
	printf("hexadecimal number");
	scanf_s("%x", &hex);
	n = hex;
	//printf("decimal is %d", n);
	for (i = 7; i >= 0; i--)
	{
		k = n >> i;

		if (k & 1)
			printf("1");
		else
			printf("0");
	}

	getch();
	return 0;
}
#include<stdio.h>
int main() {
	int arr[100], size, n, x, i, j, sum = 0, flag;
	printf("enter nummber of elements");
	scanf_s("%d", &n);
	printf("enter array elements");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("enter the sum");
	scanf_s("%d", &x);
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++) {

			sum = sum + arr[j];
			if (sum == x) {
				printf("The sub array is %d and %d", i, j);
				flag = 1;
				break;
			}
			else if (sum > x)
				break;
		}
		sum = 0;
	}
	if (flag == 0) {
		for (i = n - 1; i >= 0; i--) {
			for (j = i; j >= 0; j--) {
				sum = sum + arr[j];
				if (sum == x) {
					printf("%d %d", j, i);
				}
				else if (sum > x)
					break;
			}
			sum = 0;
		}
	}
	getch();
	return 0;
}
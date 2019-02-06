#include<stdio.h>
int main() {
	int a[20], i, j, n, temp = 0;
	printf("enter the num of elements");
	scanf_s("%d", &n);
	printf("enter the numbers");
	for (i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = n - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	getch();
	return 0;
}
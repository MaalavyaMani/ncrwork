#include<stdio.h>
int main() {
	int x[100], i, n;
	printf("the num of elements");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &x[i]);
	}
	printf("The value of x %d \n", x);
	printf("The value of (x+2) %d \n", (x + 2));
	printf("The value of *x %d \n", *x);
	printf("The value of (*x+2) %d \n", (*x + 2));
	printf("The value of *(x+2) %d \n", *(x + 2));

	getch();
	return 0;

}
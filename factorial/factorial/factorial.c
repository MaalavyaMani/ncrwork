#include<stdio.h>
int fact();
int main() {
	int n;
	printf("enter any number");
	scanf_s("%d", &n);
	printf("The factorial of %d is %d", n, fact(n));
	getch();
	return 0;

}
int fact(int a) {
	if (a > 1)
		return a * fact(a - 1);
	else
		return 1;
}
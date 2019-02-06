#include<stdio.h>
int itob(int n, int s);
int itoh(int n, int s);
int main() {
	long int n, b, c, h, s = 0;
	printf("enter a number");
	scanf_s("%ld", &n);
	b = itob(n, s);
	printf("\n Binary=%ld", b);
	c = itoh(n, s);
	getch();
	return 0;
}
int itob(int n, int s) {
	int rem, base = 1;
	while (n > 0) {
		rem = n % 2;
		s = s + rem * base;
		n = n / 2;
		base = base * 10;
	}
	return s;
}
int itoh(int n, int s) {
	printf("\n HexaDecimal =%x", n);
	return n;
}
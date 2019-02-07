#include<stdio.h>
#include<math.h>
int rotate_right(int, int);
int main()
{
	int n, b, res;
	printf("Enter no :");
	scanf_s("%d", &n);
	printf("\nEnter no of positions to rotate right:");
	scanf_s("%d", &b);
	res = rotate_right(n, b);

	printf("\nResult is:%d", res);
	getch();
	return 0;
}
int rotate_right(int n, int b)
{
	int res = n / (pow(2, b));
	return res;

}
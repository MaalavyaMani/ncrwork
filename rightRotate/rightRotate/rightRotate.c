#include<stdio.h> 
//#define INT_BITS 32


int rotate_right(int n, int d)
{
	
	return (n >> d) ;
}

int main()
{
	int n, d;
	printf("enter the number and the shift \n");
	scanf_s("%d %d", &n, &d);
	
	printf("\n Right Rotation of %d by %d is ", n, d);
	printf("%d", rotate_right(n, d));
	getch();
}
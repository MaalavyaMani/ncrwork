#include <stdio.h>
int main()
{
	int num, sum, avg, count=0 ,total;

	printf("Enter positive numbers:\n");
	sum = 0;
	scanf_s("%d", &num);
	while (num > 0)
	{
		sum += num;
		scanf_s("%d", &num);
		count++;
	}
	total = count;
	avg = sum / total;
	printf("%d %d ",total, avg );
	getch();

	return 0;
}
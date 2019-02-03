#include <stdio.h>
int main()
{
	int num, sum=0, avg, count = 0, max=0, min=0;
	printf("Enter positive numbers:\n");
	scanf_s("%d", &num);
	while(num>0) {
		
		if (num > max) max = num;
		if (num < min) min = num;
		sum += num;
		scanf_s("%d", &num);
		count++;
	} 

	avg = sum / count;
	printf("%d %d %d %d ", count, max, min, avg);
	getch();

	return 0;
}
#include<stdio.h>
int main() {
	float table[2][3] = { { 1.1,1.2,1.3},{2.1,2.2,2.3} };
	printf("The value of (table+1) is %d \n", (table + 1));
	printf("The value of *(table+1) is %d \n", *(table + 1));
	printf("The value of (*(table+1)+1) is %d \n", (*(table + 1)+1));
	printf("The value of (*(table)+1) is %d \n", (*(table) + 1));
	printf("The value of (*(table)+1) is %d \n", (*(table)+1) );
	printf("The value of *(*(table+1) +1) is %f \n", *(*(table + 1) + 1));
	printf("The value of *(*(table)+1) is %f \n", *(*(table)+1) );
	printf("The value of *(*(table+1) is %f \n", *(*(table + 1)) );
	printf("The value of *(*(table) + 1)+1 is %f \n", *(*(table)+1) +1);
	getch();
	return 0;
}
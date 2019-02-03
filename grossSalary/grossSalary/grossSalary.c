#include<stdio.h>

int main() {
	int gross_salary, basic, da, hra;

	printf("Enter basic salary : ");
	scanf_s("%d", &basic);
	
	if (basic > 0 && basic <= 4000) {
		hra = (10 * basic) / 100;
		da = (50 * basic) / 100;
	} else if(basic > 4000 && basic <= 8000) {
		hra = (20 * basic) / 100;
		da = (60 * basic) / 100;
	} else if(basic > 8000 && basic <= 12000) {
		hra = (25 * basic) / 100;
		da = (70 * basic) / 100;
	}
	else {
		hra = (30 * basic) / 100;
		da = (80 * basic) / 100;

	}

	
	gross_salary = basic + hra + da;

	printf("\nGross salary : %d", gross_salary);
	
	
	getch();
	return (0);
}
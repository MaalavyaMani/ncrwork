#include<stdio.h>
int main() {
	int i, j, count = 0;
	char * s[] = { "we will teach you how to " ,"Move a mountain ","Level a building ","Erase the past " ,
		"Make a million " };
	for (j = 0; j < 5; j++) {
		char *a = *(s + j);
		for (i = 0; a[i] != '\0'; i++)
		{
			if (a[i] == 'e')
				count++;
		}
	}
	printf("The count is %d", count);

	getch();
	return 0;
}
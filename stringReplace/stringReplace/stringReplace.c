#include<stdio.h>
#include<string.h>
int replace(char*);

/*int replace(char* s) {
	int i,count=0;
	int length = strlen(s);
	for(i=0;i<length;i++)
		if (*s == ' ') {
			*s = '-';
			count++;

		}gets(s);
	return count;
}*/
int replace(char* Test)
{
	int length = strlen(Test);
	int count = 0;
	for (unsigned int i = 0; i < length; i++)
	{
		if (*Test == ' ')
		{
			*Test = '-';
			count++;
		}
		Test++; // move pointer to next position in memory

	}
	return(count);
}
int main() {
	int n;
	char *cat = "The cat sat";
	n = replace(cat);
	printf("%d", n);
	getch();
	return 0;
}
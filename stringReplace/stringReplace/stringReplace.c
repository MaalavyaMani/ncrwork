#include<stdio.h>
#include<string.h>
int replace(char*);

int replace(char* s) {
	int i,count=0;
	int length = strlen(s);
	for(i=0;i<length;i++)
		if (s[i] == ' ') {
			s[i] = '-';
			count++;

		}
	printf("%s", s);
	return count;
}

int main() {
	int n;
	char *cat = "The cat sat";
	n = replace(cat);
	printf("%d", n);
	getch();
	return 0;
}
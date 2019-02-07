#include<stdio.h>
int replace(char*);

int replace(char*s) {
	int i,count=0;
	for(i=0;s[i]='\0';i++)
		if (s[i] == ' ') {
			s[i] = '-';
			count++;

		}gets(s);
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
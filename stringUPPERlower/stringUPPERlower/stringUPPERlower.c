#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[20];
	int i;
	printf("Enter String : ");
	gets(s);
	for (i = 0; s[i] != '\0'; i++)
		s[i] = toupper(s[i]);
	printf("String in Uppercase : %s\n", s);
	for (i = 0; s[i] != '\0'; i++)
		s[i] = tolower(s[i]);
	printf("\nString in Lowercase : %s", s);
	getch();
	return 0;
}
#include <stdio.h>
void reverseSentence();

int main()
{
	printf("Enter a sentence: ");
	reverseSentence();
	getch();
	return 0;
}

void reverseSentence()
{
	char c;
	scanf_s("%c", &c);

	if (c != '\n')
	{
		reverseSentence();
		printf("%c", c);
	}
}
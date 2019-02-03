#include<stdio.h>
int main() {
	char str[80];
	int i, length = 0, alpha = 0, numeric = 0, tab = 0, space = 0;
	scanf_s("%[^\n]s", str);
	for (length = 0; str[length]; length++);
		for (i = 0; i < length; i++)
		{
			if (str[i] == 9)
				tab++;
			else if ((str[i] <= 57) && (str[i] > 48))
				numeric++;
			else if (((str[i] >= 65 && str[i] <= 90)) || ((str[i] >= 97) && (str[i] <= 122)))
				alpha++;
			else if (str[i] == ' ')
				space++;
		}
	printf("\n Alphabets=%d\nDigits=%d\nTab=%d\nSpace=%d", alpha, numeric, tab, space);
	getch();
	return 0;
}
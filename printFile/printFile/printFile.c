#include<stdio.h>
int main() {
FILE *fp;
char ch;

fopen_s(&fp, "text.txt", "r");
if(fp== NULL)
{
	printf("Cannot open");
	return;
}
while (!feof(fp)) {
	ch = fgetc(fp);
	printf("%c", ch);
}
fclose(fp);
getch();
return 0;
}
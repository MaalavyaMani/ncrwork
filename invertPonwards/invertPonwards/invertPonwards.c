#include<stdio.h>
int main()
{
	int X, P, N, RESULT;
	int invertponwards(int, int, int);
	printf("Enter integer, start position, length to invert: \n");
	scanf_s("%d %d %d", &X, &P, &N);
	RESULT = invertponwards(X, P, N);
	printf("\n inverted integer in decimal form is \t%d", RESULT);
	return 0;
	getch();
}

int invertponwards(int X, int P, int N)
{
	int I, Y, LIMIT, LEN, BIN[15];
	LEN = 0;
	while (X > 0)
	{
		BIN[LEN] = X % 2;
		X = X / 2;
		LEN++;
	};

	for (I = LEN - 1; I > -1; I--)
	{
		printf("%d ", BIN[I]);
	}
	printf("\n");
	LIMIT = P + N;
	if (LIMIT < LEN)
	{
		for (I = P - 1; I < P + N - 1; I++)
		{
			if (BIN[I] == 0)
				BIN[I] = 1;
			else
				BIN[I] = 0;
		}
	}
	else
	{
		printf("YOU HAVE ENTERED LARGE VALUE FOR P AND N");
	}

	printf("INVERTED INTEGER IN BINARY FORM IS \t");
	for (I = LEN - 1; I > -1; I--)
	{
		printf("%d ", BIN[I]);
	}
	Y = 0;
	for (I = LEN - 1; I >= 0; I--)
	{
		Y = Y * 2 + BIN[I];
	}
	return Y;
}
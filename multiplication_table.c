#include <stdio.h>

void multiplication_table(int i, int j)
{
	if (i > 20)
	{
		return;
	}
	else
	{
		printf("%d * %d = %d\n", i, j, i * j);
		multiplication_table(i + 1, j);
	}
}

int main()
{
	int j = 19;
	printf("Multiplication table of %d\n", j);
	multiplication_table(1, j);
	return (0);
}

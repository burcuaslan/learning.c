#include <stdio.h>

int main() {

	int a, b, c;

	for (a = 1; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			c = a * b;
			if (c < 10)
			{
				printf(" %d ", c);
			}
			else
				printf("%d ", c);
		}
		printf("\n");
	}

	return 0;
}

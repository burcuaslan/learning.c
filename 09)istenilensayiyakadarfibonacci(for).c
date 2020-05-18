#include <stdio.h>
#include <stdlib.h>

int main() {

	int a = 0;
	int b = 1;
	int c;
	int d;

	printf("Fibonaccinin ilk kac elemanini istediginizi girin:");
	scanf("%d", &d);

	printf("%d\n%d\n",a,b);

	for (int i = 1; i<(d-1); i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d\n", c);
	}

	return 0;
}

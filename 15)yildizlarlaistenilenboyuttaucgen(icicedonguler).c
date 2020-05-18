#include<stdio.h>

int main() {

	int a, x, y;

	printf("Ucgenin boyutunu giriniz: ");
	scanf("%d", &a);

	for (x = 1; x <= a; x++) 
	{
		for (y = 1; y <= x; y++) 
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

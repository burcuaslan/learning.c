#include <stdio.h>

int main() {


	int a = 1;
	int b = 0;
	int c = 0;
	int f;

	printf("kac eleman gelsin?");
	scanf("%d", &f);
	for (int i = 1; i <=f; i++) {
		printf("%d\n", c);
		c = a + b;
		a = b;
		b = c;
	}
}

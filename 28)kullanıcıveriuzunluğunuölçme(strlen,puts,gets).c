#include <stdio.h>

int main() {

	char bilgi[50];
	puts("bilgiyi giriniz:");
	gets(bilgi);

	printf("%d", strlen(bilgi));

	return 0;
}

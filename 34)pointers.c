#include <stdio.h>

int main(){

	int sayi = 253;
	int *s = &sayi;

	printf("Sayi: %d\n", sayi);
	printf("Adresi: %x\n", &sayi);
	printf("Adresi: %x", s);
	
	return 0;
	}

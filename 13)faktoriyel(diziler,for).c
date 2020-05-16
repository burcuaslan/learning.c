#include <stdio.h>

int main() {

	int sayilar[] = { 1,2,3,4,5,6,7,8,9,10 };
	int fak=1;
	int i;
	int sayi;

	printf("Faktoriyelini istediginiz sayiyi girin(10a kadar): ");
	scanf("%d", &sayi);

	for (i = 1; i < sayi; i++)
	{
		fak = fak * sayilar[i];
	}

	printf("Sonuc: %d", fak);

	return 0;

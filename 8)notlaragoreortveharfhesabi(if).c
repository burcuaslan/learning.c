#include <stdio.h>
#include <stdlib.h>

int main() {

	int vize, final, ort;

	printf("Vize notunuzu giriniz: ");
	scanf("%d", &vize);
	printf("Final notunuzu giriniz: ");
	scanf("%d", &final);

	ort = (vize * 4 + final * 6) / 10;
	printf("Ortalamaniz: %d - ", ort);

	if (ort < 50) 
	{
		printf("ff");
	}
	if (ort >= 50 && ort < 60)
	{
		printf("dd");
	}
	if (ort >= 60 && ort < 70)
	{
		printf("cc");
	}
	if (ort >= 70 && ort < 85)
	{
		printf("bb");
	}
	if (ort >= 85)
	{
		printf("aa");
	}

	return 0;
}

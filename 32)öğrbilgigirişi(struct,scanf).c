#include <stdio.h>

struct ogrencibilgi 
{
	char ad[20];
	int no;
	float ort;
};


int main() {

	struct ogrencibilgi ob;

	printf("Ad Soyad: ");
	gets(ob.ad);
	printf("Numara: ");
	scanf("%d", &ob.no);
	printf("Ortalama: ");
	scanf("%f", &ob.ort);

	printf("\n*****Bilgileriniz*****\n");
	printf("Adiniz: %s\n", ob.ad);
	printf("Numaraniz: %d\n", ob.no);
	printf("Ortalamaniz: %f", ob.ort);

	return 0;
}

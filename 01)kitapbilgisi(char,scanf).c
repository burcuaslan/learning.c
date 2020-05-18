#include <stdio.h>
#include <stdlib.h>

int main() {
	char kitapadi[15], yazar[15], sayfasayisi[3], btarihi[4], bevi[10], tur[10];

	printf("Kitabin adini giriniz:");
	scanf("%s", kitapadi);

	printf("Kitabin yazarini giriniz: ");
	scanf("%s", yazar);

	printf("Sayfa sayisini giriniz: ");
	scanf("%s", sayfasayisi);

	printf("Basim tarihini giriniz: ");
	scanf("%s", btarihi);

	printf("Basim evini giriniz: ");
	scanf("%s", bevi);

	printf("Kitabin turunu giriniz: ");
	scanf("%s", tur);

	printf("Kitap Adi: %s\n", kitapadi);
	printf("Kitabin Yazari: %s\n", yazar);
	printf("Kitabin Sayfa Sayisi: %s\n", sayfasayisi);
	printf("Basim Tarihi: %s\n", btarihi);
	printf("Basim Evi: %s\n", bevi);
	printf("Kitabin Turu: %s", tur);

	return 0;

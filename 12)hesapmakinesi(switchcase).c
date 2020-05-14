#include <stdio.h>

int main() {

	int sayi1, sayi2, sonuc;
	char islem;

	printf("Uygulanacak islemi giriniz: ");
	scanf("%c", &islem);
	printf("Ilk sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d", &sayi2);

	switch (islem) {

	case '+' :
		sonuc = sayi1 + sayi2;
		printf("Sonuc: %d", sonuc);
		break;
	case '-' :
		sonuc = sayi1 - sayi2;
		printf("Sonuc: %d", sonuc);
		break;
	case '*' :
		sonuc = sayi1 * sayi2;
		printf("Sonuc: %d", sonuc);
		break;
	case '/' :
		sonuc = sayi1 / sayi2;
		printf("Sonuc: %d", sonuc);
		break;
	default: printf("Hatali giris!");

	}
	return 0;
}

#include <stdio.h>
#include <math.h>

int main() {

	double sayi, sonuc;
	printf("Logaritmasini almak istediginiz sayiyi giriniz: ");
	scanf("%lf", &sayi);

	sonuc = log10(sayi);
	printf("Sonuc: %.4lf", sonuc);

	return 0;
}

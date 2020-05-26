#include <stdio.h>
#include <math.h>

int main() {

	double sayi, mutlak;

	printf("Mutlagini bulmak istediginiz sayiyi giriniz: ");
	scanf("%lf", &sayi);

	mutlak = fabs(sayi);
	printf("Sonuc: %.lf", mutlak);

	return 0;
}

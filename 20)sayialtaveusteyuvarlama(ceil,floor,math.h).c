#include <stdio.h>
#include <math.h>

int main() {

	double sayi;
	int ust, alt;
	printf("Yuvarlamak istediginiz sayiyi giriniz: ");
	scanf("%lf", &sayi);

	ust = ceil(sayi);
	alt = floor(sayi);

	printf("Uste yuvarlanmis hali: %d", ust);
	printf("\nAlta yuvarlanmis hali: %d", alt);

	return 0;
}

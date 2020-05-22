#include <stdio.h>
#include <math.h>

int main() {

	int a;
	double b;

	printf("Karekokunu almak istediginiz sayiyi giriniz: ");
	scanf("%d", &a);
	b = sqrt(a);
	printf("Sonuc: %.4f", b);

	return 0;
}

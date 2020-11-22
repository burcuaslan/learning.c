#include <stdio.h>

int main() {
	
	int fac;

	printf("Faktoriyelini bulmak istediginiz sayiyi giriniz:");
	scanf("%d", &fac);
	
	int i = (fac-1);
	
	while (1<i) {
		fac = fac * i;
		i--;
	}

	printf("Sonuc: %d", fac);
	return 0;
}

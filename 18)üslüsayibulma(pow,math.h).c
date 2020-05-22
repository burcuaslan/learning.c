#include <stdio.h>
#include <math.h>

int main() {

	int a, b, sonuc;
	printf("Taban sayisini giriniz: ");
	scanf("%d", &a);

	printf("Us sayisini giriniz: ");
	scanf("%d", &b);

	sonuc = pow(a, b);
	printf("Sonuc: %d", sonuc);

	return 0;
}

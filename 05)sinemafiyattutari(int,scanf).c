#include <stdio.h>
#include <stdlib.h>

int main() {

	int misir, kola, su, bilet, top;

	printf("Misir adetini giriniz: ");
	scanf("%d", &misir);

	printf("Kola adetini giriniz: ");
	scanf("%d", &kola);

	printf("Su adetini giriniz: ");
	scanf("%d", &su);

	printf("Bilet adetini giriniz: ");
	scanf("%d", &bilet);

//misir 2TL, kola 2TL, su 1TL, bilet 8TL
	top = misir * 2 + kola * 2 + su + bilet * 8;
	printf("Toplam tutar: %d", top);

	return 0;
}

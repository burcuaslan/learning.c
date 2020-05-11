#include <stdio.h>
#include <stdlib.h>

int main() {

	int sinav1, sinav2, sinav3, proje, toplam, ortalama;

	sinav1 = 70;
	sinav2 = 80;
	sinav3 = 65;
	proje = 95;

	toplam = sinav1 + sinav2 + sinav3 + proje;
	ortalama = toplam / 4;

	printf("Ortalama: %d", ortalama);

	return 0;
}

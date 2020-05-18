#include <stdio.h>
#include <stdlib.h>

int main() {

	int kenar, alan, cevre, h;
	kenar = 20;
	h = 12;

	alan = kenar * h;
	alan = alan / 2;
	cevre = 3 * kenar;

	printf("Alan: %d\n", alan);
	printf("Cevre: %d", cevre);

	return 0;
}

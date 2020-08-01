#include <stdio.h>

int toplama(s1,s2) 
{
	int sonuc;
	sonuc = s1 + s2;
	return sonuc;
}

int main() {

	int a;
	int b;
	printf("Toplanacak sayilari giriniz:");
	scanf("%d%d", &a, &b);
	printf("%d", toplama(a, b));

	return 0;
}

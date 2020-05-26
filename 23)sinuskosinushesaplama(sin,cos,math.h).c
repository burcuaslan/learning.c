#include <stdio.h>
#include <math.h>

int main() {

	double derece, sinsonuc, cossonuc;
	
	printf("Dereceyi giriniz: ");
	scanf("%lf", &derece);

	sinsonuc = sin(derece);
	cossonuc = cos(derece);

	printf("Sinus degeri: %lf\n", sinsonuc);
	printf("Kosinus degeri: %lf\n", cossonuc);

	return 0;
}

#include <stdio.h>

int main() {
	
	char isim[20], yazaradi[20];
	printf("Kitabin adini giriniz: ");
	scanf("%s", isim);
	printf("Yazarin adini giriniz: "); 
	scanf("%s", yazaradi);

	strcat(isim, "-->" );
	strcat(isim, yazaradi);

	printf("\n%s", isim);

}

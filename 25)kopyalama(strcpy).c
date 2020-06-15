#include <stdio.h>

int main() {

	char kaynak[20] = "hello world";
	char kopya[20] = "";

	strcpy(kopya, kaynak);
	printf("%s", kopya);

	return 0;
}

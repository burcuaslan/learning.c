#include <stdio.h>

int main() {

	char kaynak[20] = "hello world";
	char kopya[20] = "";

	strncpy(kopya, kaynak,5);
	printf("%s", kopya);

	return 0;
}

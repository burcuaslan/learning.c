int main() {

	float a, sonuc;
  
	printf("Karekokunu bulmak istediginiz sayiyi giriniz: ");
	scanf("%f", &a);

	sonuc = pow(a, 0.5);
	printf("Sonuc: %.4f", sonuc);

	return 0;
}

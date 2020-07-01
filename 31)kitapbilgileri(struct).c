#include <stdio.h>

struct kitapbilgi 
{
    char kitapadi[20];
    char kitapyazari[20];
    int sayfasayisi;
    float puan;
};

int main() {

    struct kitapbilgi kb = { "Satranc","Stefan Zweig", 80, 7.25};

    printf("Kitap Adi: %s\n", kb.kitapadi);
    printf("Kitap Yazari: %s\n", kb.kitapyazari);
    printf("Sayfa Sayisi: %d\n", kb.sayfasayisi);
    printf("Kitap Puani: %.2f", kb.puan);

    return 0;
}

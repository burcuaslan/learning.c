#include <stdio.h>

enum sehirler
{
	hatali,adana=1,adiyaman,afyon,agri,amasya,ankara,antalya,artvin,aydin,balikesir,bilecik,bingol,bitlis,
	bolu,burdur,bursa,canakkale,cankiri,corum,denizli,diyarbakir,edirne,elazig,erzincan,erzurum,eskisehir,
	gaziantep,giresun,gumushane,hakkari,hatay,isparta,mersin,istanbul,izmir,kars,kastamonu,kayseri,kirklareli,
	kirsehir,kocaeli,konya,kutahya,malatya,manisa,kahramanmaras,mardin,mugla,mus,nevsehir,nigde,ordu,rize,sakarya,
	samsun,siirt,sinop,sivas,tekirdag,tokat,trabzon,tunceli,sanliurfa,usak,van,yozgat,zonguldak,aksaray,
	bayburt,karaman,kırıkkale,batman,sirnak,bartın,ardahan,igdir,yalova,karabuk,kilis,osmaniye,duzce
};

int main() {

	enum sehirler il;
	
	il = tunceli;
	printf("%d", il);

	return 0;
}

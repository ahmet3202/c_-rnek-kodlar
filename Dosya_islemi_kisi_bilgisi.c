#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {


	FILE *dosyaadres;
    dosyaadres=fopen("C:\\Users\\Toshiba\\Desktop\\cdosya\\yazi.txt","w");  // cdosya adlý klasor oluþturdup yeni metin belgesi yazi.txt olarak içine kaydedilmiþtir.
    
    	
	char calisan_adi[15],calisan_soyadi[15];  // normal c kodlarýný yazýyoruz klavyeden aldýk.
	float maas;
	int yas;
	printf("Calisan bilgilerini girinizz\n");
	gets(calisan_adi);
	gets(calisan_soyadi);
	printf("mmasini girinizz\n");
	scanf("%f",&maas);
	printf("Yasini girinizzz\n");
	scanf("%d",&yas);
	printf(" Adi: %s\n soyadi: %s\n maasi: %f\n yasi :%d\n",calisan_adi,calisan_soyadi,maas,yas); // konsolda yazdýrdýk
	
	fprintf(dosyaadres,"Adi:%s\n soyadi: %s\n maasi: %d\n yasi :%d\n",calisan_adi,calisan_soyadi,maas,yas); // doayaya kaydettik 
	
	
	
	
	return 0;
} 

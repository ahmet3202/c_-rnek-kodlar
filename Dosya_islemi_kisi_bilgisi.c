#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {


	FILE *dosyaadres;
    dosyaadres=fopen("C:\\Users\\Toshiba\\Desktop\\cdosya\\yazi.txt","w");  // cdosya adl� klasor olu�turdup yeni metin belgesi yazi.txt olarak i�ine kaydedilmi�tir.
    
    	
	char calisan_adi[15],calisan_soyadi[15];  // normal c kodlar�n� yaz�yoruz klavyeden ald�k.
	float maas;
	int yas;
	printf("Calisan bilgilerini girinizz\n");
	gets(calisan_adi);
	gets(calisan_soyadi);
	printf("mmasini girinizz\n");
	scanf("%f",&maas);
	printf("Yasini girinizzz\n");
	scanf("%d",&yas);
	printf(" Adi: %s\n soyadi: %s\n maasi: %f\n yasi :%d\n",calisan_adi,calisan_soyadi,maas,yas); // konsolda yazd�rd�k
	
	fprintf(dosyaadres,"Adi:%s\n soyadi: %s\n maasi: %d\n yasi :%d\n",calisan_adi,calisan_soyadi,maas,yas); // doayaya kaydettik 
	
	
	
	
	return 0;
} 

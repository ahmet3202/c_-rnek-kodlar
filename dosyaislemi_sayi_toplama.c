#include <stdio.h>
#include <stdlib.h>

// masaüstünde boþ bir klaör oluþturalým sonrasýnda klasörün uzantýsýný kopyalayýp fopen in içine yapýþtýralým ve en sona ise dosyanýn içine eklenecek olan txt metin belgesini ekleyelim.
int main() {
	FILE *dosyaadres;                                                             // dosya iþlemi için olmasý gereken komut.
	
    dosyaadres=fopen("C:\\Users\\Toshiba\\Desktop\\cdosya\\yazi.txt","w");      // w komutu yani write eklemiþ olduðumuz dosyaya yazdýrdýk.
    
    	int sayi1,sayi2;                                                      // klavyeden 2 adet sayi alarak toplamýný oluþturduk.
	printf("2 adet Sayi giriniz\n");
	scanf("%d%d",&sayi1,&sayi2);
	int toplam=sayi1+sayi2;                                                // toplam adlý deðiþkene atayýp 2 sayiyi topladýk
	fprintf(dosyaadres,"Kullanicinin girmis oldugu sayi toplam\n");       // dosyada ilk metin olarak bu görünür
	fprintf(dosyaadres,"%d\n%d",sayi1,sayi2);                            // dosyada girilen sayilarýn görünmesi
	fprintf(dosyaadres,"Bu sayilarin toplami\n");                       // dosyada metin olarak görünmesi
	fprintf(dosyaadres,"%d\n",toplam);                                 // dosyada sayýlarýn toplamýnýn görülmesi

	printf("%d\n",toplam);                                           // konsolda toplam sonucunun görülmesi
		fclose(dosyaadres);                                         // dosyanýn kapatýlmasý kapanmaz ise de çalýþmaktadýr. Ancak kapatmakta fayda var.

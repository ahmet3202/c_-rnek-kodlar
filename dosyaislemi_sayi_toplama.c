#include <stdio.h>
#include <stdlib.h>

// masa�st�nde bo� bir kla�r olu�tural�m sonras�nda klas�r�n uzant�s�n� kopyalay�p fopen in i�ine yap��t�ral�m ve en sona ise dosyan�n i�ine eklenecek olan txt metin belgesini ekleyelim.
int main() {
	FILE *dosyaadres;                                                             // dosya i�lemi i�in olmas� gereken komut.
	
    dosyaadres=fopen("C:\\Users\\Toshiba\\Desktop\\cdosya\\yazi.txt","w");      // w komutu yani write eklemi� oldu�umuz dosyaya yazd�rd�k.
    
    	int sayi1,sayi2;                                                      // klavyeden 2 adet sayi alarak toplam�n� olu�turduk.
	printf("2 adet Sayi giriniz\n");
	scanf("%d%d",&sayi1,&sayi2);
	int toplam=sayi1+sayi2;                                                // toplam adl� de�i�kene atay�p 2 sayiyi toplad�k
	fprintf(dosyaadres,"Kullanicinin girmis oldugu sayi toplam\n");       // dosyada ilk metin olarak bu g�r�n�r
	fprintf(dosyaadres,"%d\n%d",sayi1,sayi2);                            // dosyada girilen sayilar�n g�r�nmesi
	fprintf(dosyaadres,"Bu sayilarin toplami\n");                       // dosyada metin olarak g�r�nmesi
	fprintf(dosyaadres,"%d\n",toplam);                                 // dosyada say�lar�n toplam�n�n g�r�lmesi

	printf("%d\n",toplam);                                           // konsolda toplam sonucunun g�r�lmesi
		fclose(dosyaadres);                                         // dosyan�n kapat�lmas� kapanmaz ise de �al��maktad�r. Ancak kapatmakta fayda var.

#include <stdio.h>
#include <stdlib.h>

// masaüstünde boş bir klaör oluşturalım sonrasında klasörün uzantısını kopyalayıp fopen in içine yapıştıralım ve en sona ise dosyanın içine eklenecek olan txt metin belgesini ekleyelim.
int main() {
	FILE *dosyaadres;                                                             // dosya işlemi için olması gereken komut.
	
    dosyaadres=fopen("C:\\Users\\Toshiba\\Desktop\\cdosya\\yazi.txt","w");      // w komutu yani write eklemiş olduğumuz dosyaya yazdırdık.
    
    	int sayi1,sayi2;                                                      // klavyeden 2 adet sayi alarak toplamını oluşturduk.
	printf("2 adet Sayi giriniz\n");
	scanf("%d%d",&sayi1,&sayi2);
	int toplam=sayi1+sayi2;                                                // toplam adlı değişkene atayıp 2 sayiyi topladık
	fprintf(dosyaadres,"Kullanicinin girmis oldugu sayi toplam\n");       // dosyada ilk metin olarak bu görünür
	fprintf(dosyaadres,"%d\n%d",sayi1,sayi2);                            // dosyada girilen sayiların görünmesi
	fprintf(dosyaadres,"Bu sayilarin toplami\n");                       // dosyada metin olarak görünmesi
	fprintf(dosyaadres,"%d\n",toplam);                                 // dosyada sayıların toplamının görülmesi

	printf("%d\n",toplam);                                           // konsolda toplam sonucunun görülmesi
	system("pause");	
	fclose(dosyaadres);                                         // dosyanın kapatılması kapanmaz ise de çalışmaktadır. Ancak kapatmakta fayda var.

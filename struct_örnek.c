#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct sinemaFilm  // sınemefiladında bir yapı oluşturup içine char ve int tipinde değişken atadım.
	{
			char filmadi[50];
			char filmyonetmen[50];
			int yapimtarih;
		int imdb_puan;
		};

struct arabakayit{   //  arabakayıt tipinde stsruct oluşturdum yukarıdaki gibi bilgileri tek bir yapı içibde topladık.
	
	char araba_ad[20];
	int araba_yil;
	char araba_renk[20];
	
	
};


int main(int argc, char *argv[]) {
	
		struct sinemaFilm aksiyon;                // aksiyon değerini atayıp oradan işlem yapalım
		strcpy(aksiyon.filmadi,"EXTRACTION");    // strcpy ile değerleri kendim elle girdim siz klavyeden de yapabilirsiniz.
		strcpy(aksiyon.filmyonetmen,"Ahmet SOYLU");
		aksiyon.yapimtarih="2018";
		aksiyon.imdb_puan="7.8";
	printf("Film adi: %s\n  yonetmeni: %s\n film yapim tarihi : %s\n film imdb puani :%s\n",aksiyon.filmadi,aksiyon.filmyonetmen,aksiyon.yapimtarih,aksiyon.imdb_puan);
	printf("\n");  // değerleri ekranda görüntülemek için structları kullanarak kodu yazdım.
               struct arabakayit marka;
	       strcpy(marka.araba_ad,"OPEL");
	       strcpy(marka.araba_renk,"siyah");
	       marka.araba_yil="1995";


      printf(" Araba markasi : %s\n araba rengi %s\n araba cikis yili %s\n",marka.araba_ad,marka.araba_renk,marka.araba_yil);










	return 0;
}

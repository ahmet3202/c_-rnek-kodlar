		#include <stdio.h>
		#include <stdlib.h>
		
		void deger (char ad1)    // bos olarak deger adlý fonksiyon  oluþturdum.
		{
		switch(ad1)
		{
		
		case 't': printf("Sayilar toplanildi \n"); // girilen karaktere göre iþme yapar
		break;
		case'c': printf("sayilar cikarildi\n");
		break;
		}
		}
		// toplama fonksiyonu
		void topla(int sayi1,int sayi2)
		{
		
		printf("%d\n",sayi1+sayi2);
		}
		
		// çýkartma fonksiyonu 
		void cikart(int sayi1,int sayi2)
		{
		
		printf("%d\n",sayi1-sayi2);
		}
		
		
		
		int main()
		{
	
		printf("Merhaba hosgeldinizz\n");
		printf("Toplama icin t ye cikarma icin c ye basiniz\n");
		char karakter;
		int a1=12,a2=5;
		printf("karakter girinizz\n");  // t ya da c ye göre toplama veya cýkarma yapar
		scanf("%c",&karakter);
		deger(karakter);
		
		if(karakter=='t')
		{
		printf("Toplama kismindasiniz\n");
	
		topla(a1,a2);  // toplama fonksiyonu
		}
		else if(karakter=='c')
		{
	printf("Cikarma kismindasiniz\n");
		cikart(a1,a2);  // cýkartma fonksiyonu
		}
		else
		printf("yanlis deger girdinizz\n");
		
		
		
		
		return 0;
		
}

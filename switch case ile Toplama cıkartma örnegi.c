		#include <stdio.h>
		#include <stdlib.h>
		
		void deger (char ad1)    // bos olarak deger adl� fonksiyon  olu�turdum.
		{
		switch(ad1)
		{
		
		case 't': printf("Sayilar toplanildi \n"); // girilen karaktere g�re i�me yapar
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
		
		// ��kartma fonksiyonu 
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
		printf("karakter girinizz\n");  // t ya da c ye g�re toplama veya c�karma yapar
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
		cikart(a1,a2);  // c�kartma fonksiyonu
		}
		else
		printf("yanlis deger girdinizz\n");
		
		
		
		
		return 0;
		
}

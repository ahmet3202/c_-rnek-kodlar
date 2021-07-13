		#include<stdio.h>
		#include<stdlib.h>
		
		
		int main()
		{
		int sayideger=250;         // ilk deger bu ekranda 250 görünür
		printf("%d ilk deger\n",sayideger);
		int *ptrdeger;   // pointer ile bellek adresine ulaşıp değeri değiştireğiz.
		ptrdeger=&sayideger;   // sayideger değişkeninin adresini ptrdeger adlı pointer tutar adresi ise & işareti göstermiş olur.
		*ptrdeger=500;    // ikinci kısımda degerini 500 yapalım
		int sayideger2=*ptrdeger;
		printf("%d ikinci deger\n",sayideger2);// 500 görünür
		*ptrdeger=900;
		printf("%d Son deger\n",*ptrdeger);  // 900 görünür.
	        system("pause");
		return 0;
		
}

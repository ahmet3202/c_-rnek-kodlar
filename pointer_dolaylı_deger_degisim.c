		#include<stdio.h>
		#include<stdlib.h>
		
		
		int main()
		{
		int sayideger=250;         // ilk deger bu ekranda 250 g�r�n�r
		printf("%d ilk deger\n",sayideger);
		int *ptrdeger;   // pointer ile bellek adresine ula��p de�eri de�i�tire�iz.
		ptrdeger=&sayideger;   // sayideger de�i�keninin adresini ptrdeger adl� pointer tutar adresi ise & i�areti g�stermi� olur.
		*ptrdeger=500;    // ikinci k�s�mda degerini 500 yapal�m
		int sayideger2=*ptrdeger;
		printf("%d ikinci deger\n",sayideger2);// 500 g�r�n�r
		*ptrdeger=900;
		printf("%d Son deger\n",*ptrdeger);  // 900 g�r�n�r.
	system("pause");
		return 0;
		
}

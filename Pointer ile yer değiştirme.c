		#include <stdio.h>
		#include <stdlib.h>
		
		void degistir(int *deger1,int *deger2) // bo� fonk olu�ur. parametreleri ise pointer olarak atan�r
		{
			int temp1 =*deger1;   // ge�ici de�i�kene ilk de�er atan�r kaybolmamas� i�in 
			
			*deger1=*deger2;  // yerleri de�i�tirilir 
			*deger2=temp1;
		
		}
		
	int main() {
	
	float sayi1=25,sayi2=62;

	printf("Sayi 1 in  in degeri %f\n Sayi 2  nin degeri%f\n",sayi1,sayi2); // de�i�meden �nceki ilk durumu 
	
	degistir(&sayi1,&sayi2);
	printf("Sayi 1 in degeri %f\n Sayi 2 nin degeri %f\n",sayi1,sayi2); // bu k�s�mda art�k yerleri de�i�mi� olur
	
		return 0;
}

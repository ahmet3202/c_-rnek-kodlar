		#include <stdio.h>
		#include <stdlib.h>
		
		void degistir(int *deger1,int *deger2) // boş fonk oluşur. parametreleri ise pointer olarak atanır
		{
			int temp1 =*deger1;   // geçici değişkene ilk değer atanır kaybolmaması için 
			
			*deger1=*deger2;  // yerleri değiştirilir 
			*deger2=temp1;
		
		}
		
	int main() {
	
	float sayi1=25,sayi2=62;

	printf("Sayi 1 in  in degeri %f\n Sayi 2  nin degeri%f\n",sayi1,sayi2); // değişmeden önceki ilk durumu 
	
	degistir(&sayi1,&sayi2);
	printf("Sayi 1 in degeri %f\n Sayi 2 nin degeri %f\n",sayi1,sayi2); // bu kısımda artık yerleri değişmiş olur
	
		return 0;
}

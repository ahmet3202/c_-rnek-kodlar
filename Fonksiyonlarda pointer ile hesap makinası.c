		#include <stdio.h>
		#include <stdlib.h>
		
	
		float topla( float *sayi1 ,float *sayi2)  // pointer ile hesap makinesinde toplama cýkarma ve çarpma yapýlmýþtýr.
		{
			return(*sayi1+*sayi2);
		}
		
			float cikart( float *sayi1 ,float *sayi2)
		{
			return(*sayi1-*sayi2);
		}
		
				float carp( float *sayi1 ,float *sayi2)
		{
			return((*sayi1)*(*sayi2));
		}
		
	
		int main() {
		
		float sayi1,sayi2;           // tanýmlanan 2 adet sayý klavyeden alýnýp yukarýdaki fonksiyonlara gönderilmiþtir.
		printf(" 2 adet sayi giriniz\n");
		scanf("%f %f ",&sayi1,&sayi2);

		
		
		printf("Sayilarin toplami :%3.f\n",topla(&sayi1,&sayi2));
		printf("Sayilarin cikarimi :%3.f\n",cikart(&sayi1,&sayi2));
		printf("Sayilarin carpimi  : %3.f\n",carp(&sayi1,&sayi2));
		printf("Sayilarin Bolumu : %4.f\n",bol(&sayi1,&sayi2));
		
		
		
		
		
		return 0;
}

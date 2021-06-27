	#include <stdio.h>
	#include <stdlib.h>

	
	int main() {
		
		
		
		int sayilar [5],i,j,toplam=0;
		int *ptr;
		int deger;
		int sonuc=0;


		for(i=1;i<=5;i++)
		{
			scanf("%d",&sayilar[i]);
			 
	  
		}
	
	
	
		printf("5 tane sayi girinizz\n");
	
		ptr=&sayilar[0];
    
		for(j=0;j<5;j++)
		{
			toplam=toplam+*ptr;
			ptr++;
		}
	
	
	
		sonuc=toplam/5;
		printf(" ortalama %d\n ",sonuc);
	    printf("Sayilarin toplami %d\n",toplam);

	
	
	
		return 0;
	}

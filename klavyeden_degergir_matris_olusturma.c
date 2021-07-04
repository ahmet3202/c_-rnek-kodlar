		#include <stdio.h>
		#include <stdlib.h>
		
		int main()  
		{
		
		int satir,sutun,i,j;      // klayyeden girilen deðerleri matris halinde ekrana yazdýran c programlama kodu
			int	toplam[i][j];
		printf("Satir sayisini giriniz\n");  // satýr ve sutun sayisini gireriz
		scanf("%d",&satir);
		printf("Sutun sayisini giriniz \n"); 
		scanf("%d",&sutun);
	  printf("dizinin elemanlaini giriniz");
	
		int dizi[satir][sutun];
		for(i=0;i<satir;i++)              // for döngüsü halinde satir ve sutun döngüye sokulur
		{
	
		for(j=0;j<sutun;j++)
		
		{
		scanf("%4d",&dizi[i][j]);

		}
		}
		
		
		
		// deðerleri ekrana yazar
		for(i=0;i<satir;i++)
		{
		for(j=0;j<sutun;j++)
		{
		printf("%4d",dizi[i][j]);
	
		}
		printf("\n");
		}
		
		
		
		
		
		
		
		return 0;
}

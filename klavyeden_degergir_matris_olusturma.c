		#include <stdio.h>
		#include <stdlib.h>
		
		int main()  
		{
		
		int satir,sutun,i,j;      // klayyeden girilen de�erleri matris halinde ekrana yazd�ran c programlama kodu
			int	toplam[i][j];
		printf("Satir sayisini giriniz\n");  // sat�r ve sutun sayisini gireriz
		scanf("%d",&satir);
		printf("Sutun sayisini giriniz \n"); 
		scanf("%d",&sutun);
	  printf("dizinin elemanlaini giriniz");
	
		int dizi[satir][sutun];
		for(i=0;i<satir;i++)              // for d�ng�s� halinde satir ve sutun d�ng�ye sokulur
		{
	
		for(j=0;j<sutun;j++)
		
		{
		scanf("%4d",&dizi[i][j]);

		}
		}
		
		
		
		// de�erleri ekrana yazar
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

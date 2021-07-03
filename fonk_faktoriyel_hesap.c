		#include <stdio.h>
		#include <stdlib.h>
		int factoriyel(int);  // fonk prototiplemedir 
		int main()  // iik burasý çalýþýr.
		{
		printf("Bir sayi giriniz");
		int sayi;
		scanf("%d",&sayi);  // klavyeden sayi alýrýz
		printf("Sayinini faktoriyeli: %d ",factoriyel(sayi));  // fonksiyon devreye girer
		
		
		}
		
		
		int factoriyel(int x)  // hesaplama iþlemini yapar yukarýya gönderir.
		{
		int sonuc=1;
		for(int i=1;i<=x;i++) // girilen sayiya kadar hesaplama yapar
		{
		sonuc*=i;
		}
		return sonuc;
}

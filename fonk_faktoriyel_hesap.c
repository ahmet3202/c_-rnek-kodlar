		#include <stdio.h>
		#include <stdlib.h>
		int factoriyel(int);  // fonk prototiplemedir 
		int main()  // iik buras� �al���r.
		{
		printf("Bir sayi giriniz");
		int sayi;
		scanf("%d",&sayi);  // klavyeden sayi al�r�z
		printf("Sayinini faktoriyeli: %d ",factoriyel(sayi));  // fonksiyon devreye girer
		
		
		}
		
		
		int factoriyel(int x)  // hesaplama i�lemini yapar yukar�ya g�nderir.
		{
		int sonuc=1;
		for(int i=1;i<=x;i++) // girilen sayiya kadar hesaplama yapar
		{
		sonuc*=i;
		}
		return sonuc;
}

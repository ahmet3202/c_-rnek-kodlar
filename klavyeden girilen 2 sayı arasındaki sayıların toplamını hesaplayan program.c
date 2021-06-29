	#include <stdio.h>
	#include <stdlib.h>
	
	
	
	int main(int argc, char *argv[]) {   // klavyeden girilen 2 sayý arasýndaki sayýlarýn toplamýný hesaplayan program
	int toplam=0;
	int sayi1,sayi2,buyuk,kucuk;
	printf("Hnagi sayi aralýðýný toplama istiyosunuz \n\n");
	scanf("%d%d",&sayi1,&sayi2);   // 2 sayý alýrýz 
	int terimSayisi=abs(sayi1-sayi2)+1; // negatif çýkmamasý için abs kullandýk 
	
	if(sayi2>sayi1){    // farklý büyüklükte sayý girebiliriz 
	
	
	
	buyuk=sayi2;  // sayýlarý ayrý deðiþkenlerde sakladýk
	kucuk=sayi1;
	for(;terimSayisi>0;terimSayisi--,sayi1++)      // terim Sayisi azalaan kadar gitsin
	{
	printf("%d\n",sayi1);
	toplam+= sayi1;
	
	}
	
	}
	else if(sayi2<sayi1)  //  ayný sekilde farklý büyüklükte sayý girebiliriz 
	
	{
	buyuk=sayi1;
	kucuk=sayi2;
	for(;terimSayisi>0;terimSayisi--,sayi1++)
	{
	printf("%d\n",sayi1);
	toplam+= sayi2;  // sayýlarý toplar
	
	}
	
	}
	printf("%d",toplam); // toplam snucunu ekrana yazdýrýr
	
	
	
	
	
	
	return 0;
}

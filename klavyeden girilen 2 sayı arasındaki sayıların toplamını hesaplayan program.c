	#include <stdio.h>
	#include <stdlib.h>
	
	
	
	int main(int argc, char *argv[]) {   // klavyeden girilen 2 say� aras�ndaki say�lar�n toplam�n� hesaplayan program
	int toplam=0;
	int sayi1,sayi2,buyuk,kucuk;
	printf("Hnagi sayi aral���n� toplama istiyosunuz \n\n");
	scanf("%d%d",&sayi1,&sayi2);   // 2 say� al�r�z 
	int terimSayisi=abs(sayi1-sayi2)+1; // negatif ��kmamas� i�in abs kulland�k 
	
	if(sayi2>sayi1){    // farkl� b�y�kl�kte say� girebiliriz 
	
	
	
	buyuk=sayi2;  // say�lar� ayr� de�i�kenlerde saklad�k
	kucuk=sayi1;
	for(;terimSayisi>0;terimSayisi--,sayi1++)      // terim Sayisi azalaan kadar gitsin
	{
	printf("%d\n",sayi1);
	toplam+= sayi1;
	
	}
	
	}
	else if(sayi2<sayi1)  //  ayn� sekilde farkl� b�y�kl�kte say� girebiliriz 
	
	{
	buyuk=sayi1;
	kucuk=sayi2;
	for(;terimSayisi>0;terimSayisi--,sayi1++)
	{
	printf("%d\n",sayi1);
	toplam+= sayi2;  // say�lar� toplar
	
	}
	
	}
	printf("%d",toplam); // toplam snucunu ekrana yazd�r�r
	
	
	
	
	
	
	return 0;
}

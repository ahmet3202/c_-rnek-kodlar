	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	                                              //strcmp komutu ile parola uygulamas� 
	int main()
	{
    int sifre1,k1;
	char kullaniciAdi[]="merhaba";
	char Sifre[]="selam";
     int	s1=0;
	char k_Adi[20]; 
	char sifregir[10];                         // char ile sifreyaz de�i�keni olu�turup kod devam eder
	while(s1<5){
	 s1++;                                      // her seferinde 1 er artarak devam etmesini sa�lar
	
	printf("Kullinici Adini ve Sifreyi giriniz\n");
	scanf("%d%s",Sifre,k_Adi);
	k1=strcmp(kullaniciAdi,k_Adi);
	sifre1=strcmp(Sifre,sifregir);

	if(sifre1==0 && k1==0)             // 0 a e�itlerse do�ru anlam�n� ta��r ve a�a��daki kod �al���r
	{
		printf("Sifreniz dogru\n");
		printf("Sisteme Hos geldiniz\n\n");   
				break;                      // do�ru ise d�ng� sonlan�r.
	}
	else
	printf("Sifreniz yanlis\n\n");         // �ifreyi yanl�� girersek bu komut �al���r ve 5 kere while d�ng�s�nden dolay� devam eder ta ki do�ru girene kadar 

	}
  
	return 0;
	}


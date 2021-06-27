	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	                                              //strcmp komutu ile parola uygulamasý 
	int main()
	{
    int sifre1,k1;
	char kullaniciAdi[]="merhaba";
	char Sifre[]="selam";
     int	s1=0;
	char k_Adi[20]; 
	char sifregir[10];                         // char ile sifreyaz deðiþkeni oluþturup kod devam eder
	while(s1<5){
	 s1++;                                      // her seferinde 1 er artarak devam etmesini saðlar
	
	printf("Kullinici Adini ve Sifreyi giriniz\n");
	scanf("%d%s",Sifre,k_Adi);
	k1=strcmp(kullaniciAdi,k_Adi);
	sifre1=strcmp(Sifre,sifregir);

	if(sifre1==0 && k1==0)             // 0 a eþitlerse doðru anlamýný taþýr ve aþaðýdaki kod çalýþýr
	{
		printf("Sifreniz dogru\n");
		printf("Sisteme Hos geldiniz\n\n");   
				break;                      // doðru ise döngü sonlanýr.
	}
	else
	printf("Sifreniz yanlis\n\n");         // þifreyi yanlýþ girersek bu komut çalýþýr ve 5 kere while döngüsünden dolayý devam eder ta ki doðru girene kadar 

	}
  
	return 0;
	}


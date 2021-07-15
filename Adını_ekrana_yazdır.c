#include <stdio.h>
#include <stdlib.h>
void selam(){
	printf("##-Merhaba-##\nAdinizi ve soyadinizi giriniz:\n");
}

int main()
{
//Klavyeden girilen isminizi 10 defa yazdýran bir c programý//
    int sayac;
    char ad[20],soyad[20];
    selam();
    gets(ad);
	gets(soyad);
    printf("\n\n");

    for(sayac=1;sayac<5;sayac++)
    {

    printf("%d. isim: %s\n Soyadi %s",sayac,ad,soyad);
    }
    
     return 0;
}

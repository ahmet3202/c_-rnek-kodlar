#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void dortgn(int kisa,int uzun)
{
		  int i,j;
	  for(i=0;i<uzun;i++)
{
	for(j=0;j<kisa;j++)
	{
		printf("*");
	}
	   printf("\n");
}
}

 void ahmet(int s1,int s2)
 {
 	int sonuc;
	 sonuc=s1+s2;
 	printf("sonuc %d",sonuc);
 printf("\n");
 }
       
void nothesapla(float vize, float final)
{
    float puan = (vize * 0.4) + (final * 0.6);
    printf("Notunuz = %f\n",puan);
     
    if(puan > 60){
        printf("Dersi gectiniz.");
    }
    else if (puan > 50){
        printf("Dersi sorumlu gectiniz.");
    }
    else{
        printf("Dersten kaldiniz.");
    }
}
int main() {



dortgn(4,5);
   ahmet(47,9);
   nothesapla(40,79);



	return 0;
}

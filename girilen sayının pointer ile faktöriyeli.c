	#include <stdio.h>
	#include <stdlib.h>
	
int fakt(int *sayi)
{
	
	int sonuc=1;
	int i;
	for(i=*sayi;i>=1;i--)
	{
		sonuc*=(*sayi);
		(*sayi)--;
	}
	return sonuc;
}
	









	int main(int argc, char *argv[]) {
			int a,gerceksayi;
			printf("Faktöriyeli alinacak sayiyi giriniz\n\n");
			scanf("%d",&a);
			gerceksayi=a;
			printf("%d!=%d",gerceksayi,fakt(&a));





	return 0;
}

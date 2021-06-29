	#include <stdio.h>
	#include <stdlib.h>
	
	
	
	int main(int argc, char *argv[]{
	
	int sayi,toplam=0;
	printf("Bir sayi giriniz 1 e kadar toplamýný alayým\n");
	scanf("%d",&sayi);
	for(int i=0;i<=sayi;i++)
	{
		toplam+=i;
	}
	printf("%d\n",toplam);
	
	
	
	return 0;
	}

#include <stdio.h>
#include <stdlib.h>
// pointer ve memory allocation kullanarak akç adet random sayi üretileceðini bulan c programlama kodu


int main(int argc, char *argv[]) {
	
	int *pointer,i,sayi;

	printf("HOSGELDÝNÝZ\n Kac tane sayi uretilecek\n");
	scanf("%d",&sayi);
	pointer=(int*)malloc(sayi*sizeof(int));
	srand(time(NULL));
	printf("sayilar\n");
	
	while(i<sayi)
	{
		
		*(pointer+i)=rand()%100;
		printf("%d   ",*(pointer+i));
		
		i++;
	}






	return 0;
}

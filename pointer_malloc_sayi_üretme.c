#include <stdio.h>
#include <stdlib.h>
// pointer ve memory allocation kullanarak ak� adet random sayi �retilece�ini bulan c programlama kodu


int main(int argc, char *argv[]) {
	
	int *pointer,i,sayi;

	printf("HOSGELD�N�Z\n Kac tane sayi uretilecek\n");
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

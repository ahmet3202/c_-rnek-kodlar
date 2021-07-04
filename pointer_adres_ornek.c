
#include <stdio.h>
#include <stdlib.h>
	
	int main() {
	int i;
int ogrencinot[4]={10,21,45,62};

int *ptr=ogrencinot;
//for(i=0;i<4;i++)
//{
	
//	printf("%s\n",ogrencinot[i]);
//}
printf("ogrenci notlari adres degeri :%d\n",ptr);
printf("ogrenci notlari ikinci adres degeri :%d\n",ptr+1);
printf("ogrenci notlari ucuncu adres degeri :%d\n",ptr+2);
printf("ogrenci notlari adres degeri :%d\n",*ptr);
printf("ogrenci notlari ikinci adres degeri :%d\n",*(ptr+1));
printf("ogrenci notlari ucuncu adres degeri :%d\n",*(ptr+2));


	return 0;
}

		#include <stdio.h>
		#include <stdlib.h>
		
		
		int main(int argc, char *argv[]) {
		
		int x=85;
		printf("x degiþkeninin degeri %d\n",x);
		printf("x degiskeninin adresi %d\n",&x);
		int *ptrx=&x;
		printf("*ptrx degiskeninin gösterdiði adresin deðeri %d\n",*ptrx);
		printf("ptrx degiskeninin degeri %d\n",ptrx);
		printf("ptrx degiskeninin adresi %d\n",&ptrx);
		
		int sayi=10;
		int *psayi;
		psayi=&sayi;
		printf("sayimiz %d\n",sayi);	
		printf("%x\n",&sayi);
		printf("%d\n",*psayi);
		printf("%x\n",psayi);
		
		
		
		
		
		
		
		
		
		
		return 0;
		}


#include<stdio.h>
#include<stdlib.h>



void ornek_static()    // c de bellek s�n�flar�nda static fonksiyon i�inde verilen de�eri de�i�tirir sabit b�rakmaz.�rne�ini a�ag�da g�relim
{
	static float a =0.0;    // 5 10 da diyebiliriz ama� artmas�n� lan�tlamak
	printf("Merhaba statik fon icimdesiniz\n");
	a++;
		printf("%f\n",a);
}

void ornek_auto()
{
	printf("Merhaba aout nun icindesiniz \n");
		auto int a=0.0;
	a++;
	printf("%d\n",a);
	
}

int main()
{
	
	ornek_static();   // a=1 olur 
	ornek_static();   // a=2 olur 
	ornek_static();    // a=3 olur 
	printf("\n");
	
	ornek_auto();    // a=1 olur 
	ornek_auto();   // a=1 olur 
	ornek_auto(); // a=1 olur 
	
	
	
	
	
	
	
	return 0;
}

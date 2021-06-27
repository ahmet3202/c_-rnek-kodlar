		
		#include <stdio.h>
		#include <stdlib.h>
			
	void carpyaz(int a1,int a2)
	{
		int carpyaz=a1*a2;
		printf("Sayilarin carpimi %d\n",carpyaz);
		
			}		
		void toplayaz(int a1,int a2)
	{
		int toplayaz=a1+a2;
		printf("Sayilarin Toplami %d\n",toplayaz);
		
			}	
						
	void cikartyaz(int a1,int a2)
	{
		int cikartyaz=a1-a2;
		printf("Sayilarin carpimi %d\n",cikartyaz);
		
			}
			
	int main()
	{
		int sayi1,sayii2;
		printf("1.sayiyi giriniz"),
		scanf("%d",&sayi1);
		printf("2. sayiyi girinizzz");
		scanf("%d",&sayii2);
		carpyaz(sayi1,sayii2);
         toplayaz(sayi1,sayii2);
        cikartyaz(sayi1,sayii2);






	
	return 0;
		}

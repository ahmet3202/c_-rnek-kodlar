
		#include <stdio.h>
		#include <stdlib.h>
		
		
		
		int can(int n)
		{
			if(n%2==0)
			return 1;
			else
			return 0;
			
			
		}
		int man(int n)
		{
			if(n%3==0)
			{
				return 1;
			}
			
			else
			return 0;
		
			
			
		}
		int cek(int n)
		{
		if(n%3==0 && n==2)
		return 1;
		
		else
		return 0;
		}
		
		
		
		
		
		
		int main()
		{
			
			
			int p,n;
			printf("SAYÝ GÝRÝNÝZ");
			scanf("%d",&n);
			if(can(n)==1)
			{
				printf("sayi ciftir");
			}
			if(man(n)==1)
			{
				printf("Sayimiz 3 e tam bolunur");
			}
			
				if(can(n)==1 && man(n)==1)
			{
				printf("Sayi 6 ya tam bolunur");
			}
			
			
			return 0;
		}

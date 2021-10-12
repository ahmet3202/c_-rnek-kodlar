		#include<stdio.h>
		#include<stdlib.h>	
		int main()
		{
		
		int toplam;
		int seriler[6][6];
		int seri1,seri2;
		for(seri1=0;seri1<6;seri1++)
		{
		for(seri2=0;seri2<6;seri2++)
		{
		seriler[seri1][seri2]=rand()%5;
		printf("->%2d",seriler[seri1][seri2]);
		}
		printf("\t");
		printf("\n");
		
	
		}
		

		return 0;
}

#include <stdio.h>
int main()
{
	int i,j;
	int b[5],w[5];
	printf("\nEnter burst time for P1,P2,P3:");
	for(i=0;i<3;i++)
	   scanf("%d",&b[i]);
	w[0]=0;
	for(i=1;i<3;i++)
	{
		w[i]=b[i-1]+w[i-1];
		
	}
	 
	for(i=0;i<3;i++)
	  printf("\nWaiting time of p%d : %d",i+1,w[i]);
	
	
	
	return 0;
}

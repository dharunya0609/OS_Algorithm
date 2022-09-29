#include <stdio.h>
int main()
{
	int i,j,temp;
	int b[5],w[5],c[5],pos[5];
	printf("\nEnter burst time for P1,P2,P3,P4:");
	for(i=0;i<4;i++)
	   scanf("%d",&b[i]);
    for(i=0;i<4;i++)
	   c[i]=b[i];
	
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	int k=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(c[j]==b[i])
			{
				pos[k++]=j;
			}
		}
	}
	
	for(i=0;i<4;i++)
	{
		if(i==0)
		   w[i]=0;
		if(i!=0)
		{
		   w[i]=b[i-1]+w[i-1];
		}
	}
	
	
	 
	 for(i=0;i<4;i++)
	   printf("\nWaiting time of p%d : %d",pos[i]+1,w[i]);
	
	
	
	return 0;
}

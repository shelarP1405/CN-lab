// this code is correct use this. but there is query about erroed bit
#include<stdio.h>
#include<math.h>
int main()
{
	int d[7],i,j=0;
	printf("Enter databit array:");
	for(i=0;i<7;i++)
	{
		scanf("%d",&d[i]);
	}
	int c[11];
	for(i=0;i<11;i++)
	{
		if(i==0 || i==1 || i==3 || i==7)
		{
			c[i]=0;
		}
		else
		{
			c[i]=d[j];
			j++;
		}
	}

	printf("\n\n After adding r1,r2,r4,r8 as 0:");
	for(i=0;i<11;i++)
	{
		printf("%d ",c[i]);
	}
	
	c[0]=c[0]^c[2]^c[4]^c[6]^c[8]^c[10];
	c[1]=c[1]^c[2]^c[5]^c[6]^c[9]^c[10];
	c[3]=c[3]^c[4]^c[5]^c[6];
	c[7]=c[7]^c[8]^c[9]^c[10];
	
	printf("\n\n After finding r1,r2,r4,r8:");
	for(i=0;i<11;i++)
	{
		printf("%d ",c[i]);
	}
	
	c[0]=c[0]^c[2]^c[4]^c[6]^c[8]^c[10];
	c[1]=c[1]^c[2]^c[5]^c[6]^c[9]^c[10];
	c[3]=c[3]^c[4]^c[5]^c[6];
	c[7]=c[7]^c[8]^c[9]^c[10];
	
	int bitod[4],sum=0,k=0;
	for(i=0;i<11;i++)
	{
		if(i==0 || i==1 || i==3|| i==7)
		{
			bitod[k]=c[i];
			k++;
		}
	}
	printf("\n \n repeat finding of r1,r2,r4,r8 for binary to decimal:");
	for(i=0;i<4;i++)
	{
		printf("%d ",bitod[i]);
	}
	for(i=0;i<4;i++)
	{
		sum+=(pow(2,i)*bitod[i]);
	}
	
	int decimal=sum-1;
	printf("\n\n the binary to decimal is:%d",decimal+1);
	
	if(decimal==-1)
	{
		printf("\n\n final bit:");
		for(i=0;i<11;i++)
		{
		
		printf("%d ",c[i]);
	}
}
	else if(c[decimal]==1)
	{
		c[decimal]==0;
	}
	else
	{
		c[decimal]==1;
	}
	printf("\n the redudant bit %d is replace");
	for(i=0;i<11;i++)
	{
		printf("%d",c[i]);
	}

	return 0;
}

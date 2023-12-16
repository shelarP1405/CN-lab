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
	int a[4];
	a[0]=c[0]^c[2]^c[4]^c[6]^c[8]^c[10];
	a[1]=c[1]^c[2]^c[5]^c[6]^c[9]^c[10];
	a[2]=c[3]^c[4]^c[5]^c[6];
	a[3]=c[7]^c[8]^c[9]^c[10];
	
	int decimal=0;
	for(i=0;i<4;i++)
	{
		decimal=decimal+(a[i]*pow(2,i));
	}
	
	printf("\n %d element is wrong",decimal-1);
	
	printf("\n after correction");
	for(i=0;i<11;i++)
	{
		if(i==(decimal-1))
		{
			if(c[i]==0)
			{
				c[i]=1;
			}
			else
			{
				c[i]=0;
			}
		}
	}
	
	for(i=0;i<11;i++)
	{
		printf("%d",c[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i=0,n,count=0,j=0;
	printf("Enter the number of inputs:");
	scanf("%d",&n);
	int a[n],b[n*2];
	printf("Enter array of inputs");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
	b[j]=a[i];
		if(a[i]==1)
		{
			count++;
		}
		else
		{
			b[j]=a[i];
			count=0;
		}
		if(count==5)
		{
			j++;
			b[j]=0;
			count=0;
		}
		j++;
	}

	for(i=0;i<j;i++)
	{
		printf("%d",b[i]);
	}
	return 0;
}

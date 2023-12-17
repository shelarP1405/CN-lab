#include <stdio.h>
int main()
{
	int n,i,j=0;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter a %d bit:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[8]={0,1,1,1,1,1,1,0},final[24];
	for(i=0;i<n;i++)
	{
		final[j]=b[i];
		j++;
	}
	for(i=0;i<n;i++)
	{
		final[j]=a[i];
		j++;
	}
	for(i=0;i<n;i++)
	{
		final[j]=b[i];
		j++;
	}
	printf("The final byte:");
	for(i=0;i<24;i++)
	{
		printf("%d ",final[i]);
	}
	return 0;
}

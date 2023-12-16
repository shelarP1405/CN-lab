#include<stdio.h>
#include<math.h>
void anding(int a[4],int ip[4])
 {
 	int ad[4],i;
 	printf("\nafter anding:");
 	for(i=0;i<4;i++)
 	{
 		ad[i]=ip[i]&a[i];
 		printf("%d.",ad[i]);
	 }
}
void oring(int a[4],int ip[4])
{
	int ld[4],i;
	for(i=0;i<4;i++)
	{
		if(a[i]==0)
		{
			a[i]=255;
		}
		else
		{
			a[i]=0;
		}
	}
	printf("\nafter oring:");
	for(i=0;i<4;i++)
    {
 	    ld[i]=ip[i]|a[i];
 		printf("%d.",ld[i]);
	}
	 
 }
int main()
{
	int ip[4],i;
	printf("Enter ip address:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&ip[i]);
	}
//	for(i=0;i<4;i++)
//	{
//		printf("%d.",ip[i]);
//	}
	int a[4]={255,0,0,0},b[4]={255,255,0,0},c[4]={255,255,255,0};
	if(ip[0]>=0 && ip[0]<=127)
	{
		printf("\n ip address belong to class A");
		int n=8;
		n=(pow(2,(32-n)));
		printf("\n no of blocks:%d",n);
		anding(a,ip);
		oring(a,ip);
	}
	else if(ip[0]>=128 && ip[0]<=191)
	{
		printf("\n ip address belong to class B");
		int n=16;
		n=(pow(2,(32-n)));
		printf("\n no of blocks:%d",n);
		anding(b,ip);
		oring(b,ip);
	}
		else if(ip[0]>=192 && ip[0]<=223)
	{
		printf("\n ip address belong to class c");
		int n=24;
		n=(pow(2,(32-n)));
		printf("\n no of blocks:%d",n);
		anding(c,ip);
		oring(c,ip);
	}
	else
	{
		printf("invalid ip address");
	}
	return 0;
}


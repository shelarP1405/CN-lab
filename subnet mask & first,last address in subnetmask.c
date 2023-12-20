#include<stdio.h>
#include<math.h>
void subnetid(int n, int s,int ip[4])
{
	int no_of_subnet,i;
	no_of_subnet=n+(log2(s));
	printf("\n no_of_subnet=%d",no_of_subnet);
	printf("\n");
	int subnetmask[32];
	for(i=0;i<32;i++)
	{
		if(i<no_of_subnet)
		{
			subnetmask[i]=1;
		}
		else
		{
			subnetmask[i]=0;
		}
		printf("%d",subnetmask[i]);
		if(i==7 || i==15 || i==23)
		{
			printf(".");
		}
	}
	int subnet[4],j=7,sum=0,k=0;  // subnet contain subnet mask  in decimal value
	for(i=0;i<32;i++)
	{
		sum=sum+(pow(2,j)*subnetmask[i]);
		j--;
		if(j==-1)
		{
			subnet[k]=sum;
			k++;
			j=7;
			sum=0;
		}
	}
	// do inversion of subnet mask
	int subnetor[4],l=0;
	for(i=0;i<32;i++)
	{
		subnetmask[i]= !(subnetmask[i]); // ! this convert 0 to 1 or 1 to 0
		sum=sum+(pow(2,j)*subnetmask[i]);
		j--;
		if(j==-1)
		{
			subnetor[l]=sum;
			l++;
			j=7;
			sum=0;
		}
	}
	
	printf("\n subnet mask:");
	for(i=0;i<4;i++)
	{
		printf("%d.",subnet[i]);
	}
	int fd[4],ld[4];
	printf("\n first address:");
	for(i=0;i<4;i++)
	{
		fd[i]=ip[i]&subnet[i];
		printf("%d.",fd[i]);
	}
	
	printf("\n last address:");
	for(i=0;i<4;i++)
	{
		ld[i]=ip[i] | subnetor[i];
		printf("%d.",ld[i]);
	}
}
int main()
{
	int ip[4],i;
	printf("Enter a ip address:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&ip[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("%d.",ip[i]);
	}
	int s;
	printf("\n Enter number of subnets:");
	scanf("%d",&s);
	int n;
	if(ip[0]>=0 && ip[0]<=127)
	{
		printf("\n ip address belong to class A");
		n=8;
		subnetid(n,s,ip);
	}
	else if(ip[0]>=128 && ip[0]<=191)
	{
		printf("\n ip address belong to class B");
		n=16;
		subnetid(n,s,ip);
	}
	 else if(ip[0]>=192 && ip[0]<=223)
	{
		printf("\n ip address belong to class C");
		n=24;
		subnetid(n,s,ip);
	}
	else
	{
		printf("invalid ip adddress");
	}
	return 0;
}

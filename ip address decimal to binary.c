#include<stdio.h>
#include<string.h>
int main()
{
	char ip[15];
	puts("Enter a ip address");
	puts(ip);
	gets(ip);
	int newip[4];
	int count=0,i;
	for(i=0;i<15;i++)
	{
		if(ip[i]!='\0' && count<4)
		{
		
		if(ip[i]=='.')
		{
			i++;
		}
		else
		{
			newip[count]=atoi(&ip[i]);
			count++;
			while(ip[i] != '.' && ip[i] != '\0')
			{
				i++;
			}
		}
	}
}
	printf("Octet for ip \n");
	for(i=0;i<count;i++)
	{
		printf("octet[%d] =%d\n",i+1,newip[i]);
	}
	
	int divide,remainder;
	printf("ip address after decimal to binary:");
	for(i=0;i<count;i++)
	{
		do
		{
			divide=newip[i]/2;
			remainder=newip[i]-divide;
			if(divide<remainder)
			{
				printf("1");
				newip[i]=divide;
			}
				else
				{
					printf("0");
					newip[i]=divide;
				}
			}while(divide != 0);
			printf(".");
		}
	return 0;
}

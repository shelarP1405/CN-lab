#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	puts("Enter a string : ");
	gets(str);
	printf("Enterd string : ");
	puts(str);

	int count = strlen(str)+1;

	printf("Output is : ");
	printf("%d",count);
	puts(str);
	
	char rstr[100];
	puts("Enter a recieved string : ");
	gets(rstr);
	int rcount=strlen(rstr)+1;
	if(count==rcount)
	{
		printf("string is accepted");
	}
	else
	{
		printf("string is not accepted");
	}
	return 0;
}

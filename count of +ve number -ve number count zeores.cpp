#include<stdio.h>
int main()
{
	int num,pos=0,nega=0,zeores=0;
	printf("..........Enter -1 to exit...........\n");

	while(1)
	{
			printf("Enter the number:");
	scanf("%d",&num);
	if(num==-1)
	{
		break;
	}
		if(num>0)
		{
			pos=pos+1;
		}
		if(num==0)
		{
			zeores=zeores+1;
		}
		if(num<0)
		{
			nega=nega+1;
		}
		printf("Count of +ve number %d\n",pos);
		printf("Count of zeores number %d\n",zeores);
		printf("Count of -ve number %d\n",nega);
	}
}
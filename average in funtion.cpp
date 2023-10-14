#include<stdio.h>
void arrays(int numbers[]);
int main()
{
	int numbers[]={10,15,35,40,50};
	arrays(numbers);
	
}
void arrays(int numbers[])
{
	int sum=0;
	int avg;
	for(int i=0;i<5;i++)
	{
	
	
		sum=sum+numbers[i];
}
	printf("the sum of array element= %d\n",sum);

avg=sum/5;
	
	printf("the average of array= %d\n",avg);
	
}


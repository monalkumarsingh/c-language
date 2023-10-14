#include<stdio.h>
int main()
{
	float num1,num2;
	printf("Enter the any two number to convert percentage:");
	scanf("%d %d",&num1,&num2);
	float percentage=num1/num2*100;
	printf("the percentage is =%f %",percentage);
}
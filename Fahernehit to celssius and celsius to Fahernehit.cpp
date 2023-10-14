#include<stdio.h>
int main()
{
		while(1)
	{
		int num;
		int c;
		float F,c1;
		printf("\t...Please Enter the number -1 to exit the loop or loop continue press any number....:");
     scanf("%d",&num);
     if(num==-1)
     {
     	break;
	 }
	 printf("Convert the Fahernheit to Celsius:\n");
	 	 printf("Please Enter the  Celsius value\n");
	 	 scanf("%d",&c);
	 	 F=(1.8*c)+32;
	printf("Fahernheit is =%f\n",F);
printf("Convert the Celsius  to Fahernheit :\n");
c1=0.5*(F-32);
printf("Celsius is =%f\n",c1);

}
}
	 
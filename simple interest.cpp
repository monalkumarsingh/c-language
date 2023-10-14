#include<stdio.h>
int main()
{
		while(1)
	{
	float p,r,t,num;	
printf("\t...Please Enter the number -1 to exit the loop or loop continue press any number....:");
     scanf("%d",&num);
     if(num==-1)
     {
     	break;
	 }
printf("Please Enter the Principal Ammount:\n");
scanf("%f",&p);
printf("Please Enter the Rate of interest(%)\n");
scanf("%f",&r);
printf("Please Enter the time:\n");
scanf("%f",&t);
printf("The simple interest is =%f:\n",p*r*t/100);
}
}

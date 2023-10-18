#include<stdio.h>
int main()
{
	int i,j,n=5,option,x=1,x1=2;
	        printf("To print star traingular pattern press 1:\n");
	 	    printf("To print star traingular pattern in reverse order press 2:\n");
	 	    printf("To print star square pattern press 3:\n");
	        printf("To print star L pattern press 4:\n");
	        printf("To print star U pattern press 5:\n");
	        printf("To print star F pattern press 6:\n");
	        printf("To print star E pattern press 7:\n");
	        printf("To print star T pattern press 8:\n");
	        printf("To print star X pattern press 9:\n");
	        printf("To print star N pattern press 10:\n");
	        printf("To print star C pattern press 11:\n");
	        printf("To print star H pattern press 12:\n");
	        printf("To print star I pattern press 13:\n");
	        printf("To print number pattern press 14:\n");
	        printf("To print number pattern press 15:\n");
	        printf("To print number pattern press 16:\n");
	        printf("To print number pattern press 17:\n");
	        printf("To print number pattern press 18:\n");
	        printf("To print even number pattern press 19:");
            printf("To print number 0(even place) and 1 (odd place) pattern press 20:\n");
	        printf("To print number 0(remainder 0) and 1 (remiander 1) pattern press 21:\n");
	        printf("To print number 0(remainder 0) and 1 (remiander 1) pattern press 22:\n");
	        printf("To print number 0(remainder 0) and 1 (remiander 1) pattern press 23:\n");
	        printf("To print the square number pattern 24:\n");
	        printf("To print 7 pattern 25:\n");
	        printf("To print 8 pattern 26:\n");
	        printf("To print 9 pattern 27:\n");
	         printf("To print 3 pattern 28:\n");
     scanf("%d",&option);
     switch(option)
     {
     	
     	case 1:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=i;j++)
     			{
     				printf("*");
				 }
				 printf("\n");
			 }
			 break;
			 printf("\n");
     	case 2:
     		for(i=n;i>=1;i--)
     		{
     			for(j=1;j<=i;j++)
     			{
     				printf("*");
				 }
				 printf("\n");
			 }
	 break;
	 case 3:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     				if(i==1||i==n||j==1||j==n)
     				printf("*");
     				else
     				printf(" ");
				 }
				 printf("\n");
			 }
			 break;
			 printf("\n");
			 case 4:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     				if(j==1||i==n)
     				printf("*");
     				else
     				printf(" ");
				 }
				 printf("\n");
			 }
			 break;
			 case 5:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     				if(j==1||i==n||j==n)
     				printf("*");
     				else
     				printf(" ");
				 }
				 printf("\n");
			 }
			 printf("\n");
			 break;
			  case 6:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     				if(i==1||j==1||i==3)
     				printf("*");
     				else
     				printf(" ");
				 }
				 printf("\n");
			 }
			 
			 printf("\n");
			 break;
			   case 7:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     				if(i==1||j==1||i==3||i==5)
     				printf("*");
     				else
     				printf(" ");
				 }
				 printf("\n");
			 }
			 printf("\n");
			 break;
			 case 8:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     				if(i==1||j==3)
     				printf("*");
     				else
     				printf(" ");
				 }
				 printf("\n");
			 }
			 break;
			 case 9:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     				if(i==j||(i+j)==6)
     				printf("*");
     				else
     				printf(" ");
				 }
				 printf("\n");
			 }
			 break;
			 printf("\n");
			 case 10:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     				if(j==1||i==j||j==n)
     				printf("*");
     				else
     				printf(" ");
				 }
				 printf("\n");
			 }
			 break;
			 printf("\n");
			  case 11:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     				if(j==1||i==1||i==n)
     				printf("*");
     				else
     				printf(" ");
				 }
				 printf("\n");
			 }
			 break;
			 printf("\n");
			  case 12:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     				if(j==1||i==3||j==n)
     				printf("*");
     				else
     				printf(" ");
				 }
				 printf("\n");
			 }
			 printf("\n");
			 break;
			  case 13:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     				if(i==1||i==n||j==3)
     				printf("*");
     				else
     				printf(" ");
				 }
				 printf("\n");
			 }
			 break;
			  case 14:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     			printf("%d",i);
				 }
				 printf("\n");
			 }
			 printf("\n");
			 break;
			 case 15:
     		for(i=1;i<=n;i++)
     		{
     			for(j=1;j<=n;j++)
     			{
     			printf("%d",j);
				 }
				 printf("\n");
			 }
			 break;
			 case 16:
     		for(i=5;i>=1;i--)
     		{
     			for(j=1;j<=n;j++)
     			{
     			printf("%d",i);
				 }
				 printf("\n");
			 }
			 break;
			 	 case 17:
     		for(i=5;i>=1;i--)
     		{
     			for(j=5;j>=1;j--)
     			{
     			printf("%d",j);
				 }
				 printf("\n");
			 }
			 printf("\n");
			 	 case 18:
     		for(i=1;i<=5;i++)
     		{
     			for(j=1;j<=5;j++)
     			{
     			printf(" %d ",x);
     			x=x+1;
				 }
				 printf("\n");
			 }
			 printf("\n");
			 	 case 19:
     		for(i=1;i<=5;i++)
     		{
     			for(j=1;j<=5;j++)
     			{
     			printf(" %d ",x1);
     			x1=x1+2;
				 }
				 printf("\n");
			 }
			 printf("\n");
			 case 20:

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i+j)%2==0)
			printf("0");
			else
			printf("1");
		}
		printf("\n");
	}
	printf("\n");
	case 21:

	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%2d",(i+j)%2);
		}
		printf("\n");
	}
	printf("\n");
	case 22:

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		printf("%2d",j%2);
		}
		printf("\n");
	}
	printf("\n");
	case 23:

	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%2d",j%2);
		}
		printf("\n");
	}
		case 24:

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		printf(" %2d ",i*i);
		}
		printf("\n");
	}
	case 25:
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||i+j==6)
			printf("7");
			else
			printf(" ");
			
		}
		printf("\n");
}
case 26:
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||i==n||i==3||j==1||j==n)
			printf("8");
			else
			printf(" ");
			
		}
		printf("\n");
}
case 27:
	int mid=n/2;
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||i==n||i==mid||(j==1&&i<=mid)||j==n)
			printf("9");
			else
			printf(" ");
			
		}
		printf("\n");
}
//   case 28:
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if(i==1||i==n||j==n||j==3)
//			printf("3");
//			else
//			printf(" ");
//			
//		}
//		printf("\n");
//}

}
}
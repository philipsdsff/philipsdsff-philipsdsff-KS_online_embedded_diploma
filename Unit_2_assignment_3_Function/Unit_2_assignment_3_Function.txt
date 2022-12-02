/*
 * main.c
 *
 *  Created on: Nov 30, 2022
 *      Author: Philip
 */


/////////////////////////EX1///////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
/*#include <stdio.h>


float func(int x)
{
	int b;
	b = x%2;
	return b ;
}
float Func(int x)
{
	int b;
	b = x%3;
	return b ;
}
int main()
{
	int d;
	int first,second;
	int i;
	printf("Enter a first integer:\r\n");
	scanf("%d",&first);
	printf("the first integer is %d\r\n",first);


	printf("Enter a second integer:\r\n");
	scanf("%d",&second);
	printf("the second integer is %d\r\n",second);



for(i=0;i<=(second-first);i++)
{
		d = func(first+i);
		if((first+i)!=2 && d==0)
		{
			printf("\r\nthe integer is NOT prime: %d\r\n",first+i);
		}
		else
		{ d = Func(first+i);
		if((first+i)!=3&&d==0)
				{
					printf("\r\nthe integer is NOT prime: %d\r\n",first+i);
				}
		else{
			printf("\r\n the integer is prime: %d\r\n",first+i);
		}
		}
}
}*/

/////////////////////////////////////////////EX2/////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
/*#include <stdio.h>
int hi(int x)
{ int d =1 ;
	while (x>0)
	{
	d*=x;
		x--;

	}
	printf(" the factorial is :%d",d);
	return 0;
}
int main ()
{
    int x;
	printf("Enter the integer:\r\n");
	scanf("%d",&x);
	printf("the integer is %d\r\n",x);

	hi(x);

}*/

//////////////////////////////////////////EX3///////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include <stdio.h>
#include <string.h>
int hi(char x[])
{
	int i,j;
	i=0;
	char w;
	 j= strlen(x)-1;
	while(i<j)
		{

			w=x[i];
			x[i]=x[j];
				x[j]=w;
			j--;
			i++;


		}

		printf("\r\nThe reverse:%s\r\n ",x);
	return 0 ;
}
int main ()
{


		char x[100];
			 printf("Enter a string : ");
			 fflush(stdout); fflush(stdin);
			 gets(x);
			 printf("The string is :%s\r\n ",x);
			 hi(x);

}
*/
///////////////////////////////////////EX4/////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
/*#include<stdio.h>
#include <math.h>
int hi(int x)
{
	int ott;
	ott=pow(x,x);
	printf("%d",ott);
return 0 ;
}




int main ()
{
	int x;
	printf("Enter base number : ");
    fflush(stdout); fflush(stdin);
    scanf("%d",&x);
	printf("The number is :%d\r\n ",x);
	hi(x);
return 0 ;
}
*/









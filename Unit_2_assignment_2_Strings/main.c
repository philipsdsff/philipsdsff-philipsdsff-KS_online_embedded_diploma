
/////////////////EX1//////////////////////////////////////////////
///////////////////////This website is awesome////////////////////////////////////////////


 /* #include <stdio.h>
int main()
{
	char x[100];
	char z;
	int i ;
	int j =0 ;

	 printf("Enter a string : ");
	 fflush(stdout); fflush(stdin);
	 gets(x);
	 printf("The string is :%s\r\n ",x);

	 ///////
	 printf("Enter a char:%c ",z);
	 	 fflush(stdout); fflush(stdin);
	 scanf("%c",&z);

	 for(i=0;x[i] != '\0';i++)
	 {
		 if (z==x[i])
		 {
			 j++;

		 }

	 }
	 printf("%d",j);

	    return 0;

}*/

//////////////////////////EX2//////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
/*#include <stdio.h>
int main()
{
	char x[100];
		 printf("Enter a string : ");
		 fflush(stdout); fflush(stdin);
		 gets(x);
		 printf("The string is :%s\r\n ",x);
	printf("x:%s,length:%d\r\n",x,strlen(x));
return 0 ;
}*/
///////////////////////////EX3//////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
/*#include <stdio.h>
#include<string.h>
int main()
{
	int i,j;
	 i=0;
	char x[100];
	char w;
		 printf("Enter a string : ");
		 fflush(stdout); fflush(stdin);
		 gets(x);
		 printf("The string is :%s\r\n ",x);
		 j= strlen(x)-1;

	printf("x:%s,length:%d\r\n",x,strlen(x));

	while(i<j)
	{
		if(j>0)

	{
		x[i]=x[j];
		j--;
		++i;

	}
	}

	printf("\r\nThe reverse:%s\r\n ",x);
return 0 ;
}*/
/*#include <stdio.h>
int main()
{
	int i,j;
	 i=0;
	char x[100],w;
		 printf("Enter a string : ");
		 fflush(stdout); fflush(stdin);
		 gets(x);
		 printf("The string is :%s\r\n ",x);
		 j= strlen(x)-1;

	printf("x:%s,length:%d\r\n",x,j);

	while(i<j)
	{

	{
		w=x[i];
		x[i]=x[j];
			x[j]=w;
		j--;
		i++;

	}

	}

	printf("\r\nThe reverse:%s\r\n ",x);
return 0 ;
}*/

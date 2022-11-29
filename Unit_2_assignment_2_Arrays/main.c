//////////////////////////////////////////////////////
///////////////////////EX1///////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/*#include <stdio.h>

void main()
{
/////////////////declaration//////////////////////////
	int a[2][2];
	int b[2][2];
	int x[2][2];
	int r,c;
/////////////////first mat//////////////////////////
	for (r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("enter the items(%d,%d):",r,c);
					fflush(stdout); fflush(stdin);
					scanf("%d",&a[r][c]);
		}
	}
	printf("the matrix a is \n");
		for(r=0;r<2;r++)
			{
				for(c=0;c<2;c++)
				{printf("%d\t",a[r][c]);

				}
				printf("\r\n");
			}

/////////////////////second matrix////////////////////


	for (r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				printf("enter the items(%d,%d):",r,c);
						fflush(stdout); fflush(stdin);
						scanf("%d",&b[r][c]);
			}
		}
	///print the second matrix
	printf("the matrix b  is \n");
		for(r=0;r<2;r++)
			{
				for(c=0;c<2;c++)
				{printf("%d\t",b[r][c]);

				}
				printf("\r\n");
			}
		//////////////////////adding/////////////
		for(r=0;r<2;r++)
					{
						for(c=0;c<2;c++)
						{
							x[r][c]=a[r][c]+b[r][c];

						}
					}
		///////////////////////////printing the summation ////////////
		printf("the sumation is\r\n");
		for(r=0;r<2;r++)
							{
								for(c=0;c<2;c++)
								{
									printf(" %d\t",x[r][c]);

								}
								printf("\r\n");
							}

}*/


///////////////////////EX2/////////////////////////////////////////
///////////////////////////////////////////////////////////////////
/*#include <stdio.h>

void main()
{	float a[19];
     float sum=0.0;

int i;
int j;
scanf("%d",&j);
printf("the j:%d\r\n",j);

for (i=0;i<j;++i)
{

	{
		printf("enter the items(%d):",i);
				fflush(stdout); fflush(stdin);
				scanf("%f",&a[i]);
	}
}
for (i=0;i<j;++i)
{sum+=a[i];
}
printf("the sum is:%f\r\n",sum);
printf("the average is:%f\r\n",sum/j);
}*/

////////////////////////////////////////////EX3//////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

/*#include <stdio.h>

void main()
{
/////////////////declaration//////////////////////////
	int a[55][55];
	int t[55][55];
	int r,c,i,j;

	scanf("%d",&i);
	printf("the i:%d\r\n",i);
	scanf("%d",&j);
	printf("the j:%d\r\n",j);

/////////////////first mat//////////////////////////
	for (r=0;r<i;r++)
	{
		for(c=0;c<j;c++)
		{
			printf("enter the items(%d,%d):",r,c);
					fflush(stdout); fflush(stdin);
					scanf("%d",&a[r][c]);
		}
	}
	printf("the matrix a is \n");
		for(r=0;r<i;r++)
			{
				for(c=0;c<j;c++)
				{printf("%d\t",a[r][c]);

				}
				printf("\r\n");
			}

		for(r=0;r<i;r++)
					{
						for(c=0;c<j;c++)
						{
							t[c][r]=a[r][c];

						}
					}
		printf("the matrix t is \n");
		for(c=0;c<j;c++)
		{
		{for(r=0;r<i;r++)
			printf("%d\t",t[c][r]);
		printf("\r\n");

		}
		}
}*/


//////////////////EX4/////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
/*
#include <stdio.h>
int main()
{
	int e[15];
	int i;
	int w=6;
	for(i=0;i<5;i++)
				{
					printf("enter the items(%d):",i);
							fflush(stdout); fflush(stdin);
							scanf("%d",&e[i]);
				}
							printf("the matrix e is \n");
									for(i=0;i<5;i++)
									{
										printf("%d\t",e[i]);
									}
									printf("\r\n");
///////////
for (i=5;i>=2;i--)
{
	e[i]=e[i-1];

}
e[1]=w;
printf("the matrix new e is \n");
									for(i=0;i<=5;i++)
									{
										printf("%d\t",e[i]);
									}
									printf("\r\n");
return 0 ;
}*/

//////////////////////////////////////EX5///////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
/*
# include <stdio.h>
int main()
{
	int e[15];
	int i,t;
	scanf("%d",&t);
	for(i=0;i<5;i++)
				{
					printf("enter the items(%d):",i);
							fflush(stdout); fflush(stdin);
							scanf("%d",&e[i]);
				}
							printf("the matrix e is \n");
									for(i=0;i<5;i++)
									{
										printf("%d\t",e[i]);
									}
									printf("\r\n");


									for(i=0;i<5;i++)
									{
										if(t==e[i])
										{
											printf("you success");
											break;
										}
									}
										 if (t!=e[i]&&i>=5)
										{
											printf("worng");
										}
				return 0 ;
}*/

















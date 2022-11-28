/*
 * main.c
 *
 *  Created on: Nov 28, 2022
 *      Author: Philipo
 */




#include <stdio.h>
int main()
{    char i;

	char y;
	scanf ("%c",&y);

	char x [5]= {'a','i','e','u','o'};

	for (i=0;i<5;i++)
	{
		if(y ==  x[i])

		{	printf("it is vowl");
		break;

		}
	}

		 if (i>=5&&y!=x)
		{
			printf("it is constant");

		}


	return 0 ;
}


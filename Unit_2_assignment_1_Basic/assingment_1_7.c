/*
 * main.c
 *
 *  Created on: Nov 28, 2022
 *      Author: Philipo
 */




#include <stdio.h>
int main()
{
	float a , b;
	a=1.2;
	b= 2.45;
	a= a-b;
	b=a+b;
	a=b-a;

	printf ("%f\r\n",a);
	printf ("%f\r\n",b);
		return 0 ;
}
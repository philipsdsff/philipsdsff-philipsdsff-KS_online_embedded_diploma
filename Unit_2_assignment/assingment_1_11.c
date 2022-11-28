/*
 * main.c
 *
 *  Created on: Nov 28, 2022
 *      Author: Philipo
 */




#include <stdio.h>
int main()
{
	float a;
	printf("my no:%f\r\n",a);
	scanf("%f",&a);
	if(a>0)
		printf("the no is positive");
	else if(a<0)
		printf("the no is negative");
	else
		printf("the no is zero ");
	return 0 ;

}


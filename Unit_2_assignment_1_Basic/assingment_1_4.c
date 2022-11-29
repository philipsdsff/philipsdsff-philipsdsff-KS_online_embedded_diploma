/*
 * main.c
 *
 *  Created on: Nov 28, 2022
 *      Author: Philipo
 */






#include <stdio.h>
#include <math.h>

float multiplication(float x, float y )
{
	float mul;
	mul=x*y;
	return mul;

}
int main()
{
	float z;
	z = multiplication(2.4,1.1);

printf("product is %f",z);

}


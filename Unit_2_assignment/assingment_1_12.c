/*
 * main.c
 *
 *  Created on: Nov 28, 2022
 *      Author: Philipo
 */






/////////////////////////////////////////////////////////////////
// we will find tha alphabet is char or not by comparing the ascii code of it with other ....
//the asci code to binary no for alphabet......




#include <stdio.h>
int main()
{
	char ch;

	scanf("%c",&ch);

	if( (ch>='a' && ch<='z') ||( ch>='A' && ch<='Z'))
		printf("the char is alfabet");
	else
		printf("the char is not alfapet");
	return 0;

}
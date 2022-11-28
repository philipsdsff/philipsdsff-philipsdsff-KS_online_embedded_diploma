/*
 * main.c
 *
 *  Created on: Nov 28, 2022
 *      Author: Philipo
 */




#include <stdio.h>
int main(int argc, char **argv)
{    int a;
     printf("a is the no.:");
     fflush(stdin); fflush(stdout);
     scanf("%d",&a);

     int b;
          printf("b is the no.:");
          fflush(stdin); fflush(stdout);
          scanf("%d",&b);

          int c;
               printf("c is the no.:");
               fflush(stdin); fflush(stdout);
               scanf("%d",&c);


     if (a>b)
     {
    	 if(a>c)

    	 {
    	 printf("the largest no is:%d\r\n",a);
                   }
    	 else
    		 {
    	    	 printf("the largest no is:%d\r\n",c);
    		 }
     }
    	 else if (b>c)
    	 {
    		 printf("the largest no is:%d\r\n",b);
     }
    	 else{
    		 printf("the largest no is:%d\r\n",c);
    	 }
	return 0 ;
}
#include <stdio.h>
int main()
{
 int i,j;
 int mul=1 ;
 printf("j is :%d\r\n",j);
 scanf("%d",&j);
 if(j>0)
   {
  for( i =1 ;i<=j;i++)
	 { mul =mul*i ;
	                      }
    printf("mul is %d",mul);

      }
 else{
	 printf("error");
 }
return 0;

}
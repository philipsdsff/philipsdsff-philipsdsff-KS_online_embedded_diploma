#include <stdio.h>


int main (int argc, char**argv )

{

          int x,y,z;
          char choice;
                             printf("x is %d\r\n",x);
                               scanf("%d",&x);
                                  printf("y is %d\r\n",y);
                                  scanf("%d",&y);
                               printf("\r\nEnter the choice:\r\n");
	                           fflush(stdin);fflush(stdout);
	                           scanf("%c",&choice);
      switch(choice)
{
      case'a':
      {z=x+y;
      printf("%d",z);
      }
      break ;

      case'b':
      {z=x-y;
      printf("%d",z);
      }
      break;

      case'c':
      {z=x/y;
      printf("%d",z);
      }
      break;

      case'd':
      {z=x*y;
      printf("%d",z);
      }
      break;

      default:
      { printf("\r\nwrong choice\r\n");
      } break;
}
}



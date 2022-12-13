


///////////////////////////////EX1////////////////////////////////////
//////////////////////////////////////////////////////////////////////
/*
#include <stdio.h>
int main()
{
    int m=29 ; 
    int* p;
    p = &m;
    
    printf("the address of m 0x%x\r\n",&m);
    printf("the value of m %d\r\n",m);


    printf("the address of pointer 0x%x\r\n",p);
    printf("the value of pointer %d\r\n",*p);

    m=34;

    printf("the address of pointer 0x%x\r\n",p);
    printf("the value of pointer %d\r\n",*p); 


    *p=7;
    printf("the address of m 0x%x\r\n",&m);
    printf("the value of m %d\r\n",m);

    return 0 ; 
}

*/
///////////////////////////////EX2////////////////////////////////////
//////////////////////////////////////////////////////////////////////
/*#include <stdio.h>
int main()
{
char x[40]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char* px ;
px=x;
int i;
for(i=0;i<sizeof(x);i++,px++)
printf("%c",*px);
return 0 ; 
}*/

///////////////////////////////EX3////////////////////////////////////
//////////////////////////////////////////////////////////////////////
/*#include<stdio.h>
#include<string.h>
void pfunc(char* a)
{
	int i,j;
	i=0;
	char w;
    j= strlen(a)-1;
	while(i<j)
	{

	 {
		w=a[i];
		a[i]=a[j];
			a[j]=w;
		j--;
		i++;
       

	 }

	}	
}

int main(int argt,char**argv)
{
    	 	char x[100];
		 printf("Enter a string : ");
		 fflush(stdout); fflush(stdin);
		 gets(x);
		 printf("The string is :%s\r\n ",x);
       pfunc(x);
        printf("The reverse is :%s\r\n ",x);
        return 0 ; 
}
*/
///////////////////////////////EX4////////////////////////////////////
//////////////////////////////////////////////////////////////////////
/*#include<stdio.h>
#include<string.h>
int main()
{
    int  x[4];

    for(int i=0 ; i<5;i++)
    {
    scanf("%d\r\n", &x[i]);
    }

    for(int i=0 ; i<5;i++)
    {
    printf("the element is%d\r\n",  x[i]);
    }

}*/

/*#include<stdio.h>
#include<string.h>


void sort(int* x)
{
    int i ,j, temp;
    for(i=0 ; i<5;i++)
    for(j=0 ; j<5;j++)
    if(x[i]>x[j])
    {
        temp = x[i];
        x[i]=x[j];
        x[j]=temp;
    }
}



int main()
{
    int  x[4];

    for(int i=0 ; i<5;i++)
    {
    scanf("%d\r\n", &x[i]);
    }

    for(int i=0 ; i<5;i++)
    {
    printf("the element is%d\r\n",  x[i]);
    }
sort(&x);
  for(int i=0 ; i<5;i++)
    {
    printf("the reverse element is%d\r\n",  x[i]);
    }
}*/
///////////////////////////////EX5////////////////////////////////////
//////////////////////////////////////////////////////////////////////
/*#include<stdio.h>
struct Sstudent 
{
    char m_Exmployee_name[50];
    int m_Exmployee_id;
};
void FUNCTION(struct Sstudent* PSTUDENT)
{
     printf("Enter Exmployee Name : ");
		 fflush(stdout); fflush(stdin);
		 gets(PSTUDENT->m_Exmployee_name);

     printf("Enter Employee ID : ");
     scanf("%d",&PSTUDENT->m_Exmployee_id);

}
void main()
{
    struct Sstudent S;
    FUNCTION(&S);
    printf("theExmployee Name : %s \r\n",S.m_Exmployee_name);
    printf("theExmployee id : %d\r\n",S.m_Exmployee_id);

}*/
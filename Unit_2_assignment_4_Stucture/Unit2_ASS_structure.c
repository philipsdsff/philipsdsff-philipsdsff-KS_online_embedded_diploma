/*
 * main.c
 *
 *  Created on: Dec 3, 2022
 *      Author: Philip
 */

//////////////////////////////////////////////EX1///////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
/*#include <stdio.h>
#include<string.h>

struct sstudent
{
	char m_Name[50];
	float m_Marks_st;
	int m_Roll_Number_st;
};

int main()
{
	struct sstudent Student;
	char Firstname[50];
	char secondname[50];

		printf("Enter first name student:\r\n");
		scanf("%s",&Firstname[0]);
		printf("Enter second name student:\r\n");
		scanf("%s",&secondname[0]);

		strcpy(Student.m_Name,Firstname);
		strcat(Student.m_Name," ");
		strcat(Student.m_Name,secondname);

		printf("Entermarks:\r\n");
		scanf("%f",&Student.m_Marks_st);

		printf("EnterrollNumber\r\n:");
		scanf("%d",&Student.m_Roll_Number_st);

		printf("student name is:%s\r\n",Student.m_Name);
		printf("student marks is:%f\r\n",Student.m_Marks_st);
		printf("student roll Number is:%d\r\n",Student.m_Roll_Number_st);

	return 0 ;
}*/
///////////////////////////////////////////////EX2///////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////

/*#include <stdio.h>
#include <math.h>
struct Sdis
{
	float m_feet;
	float m_inch;
};

struct Sdis Read_number(char name[])
{
	struct Sdis c;
	printf("%s\r\n",name);
	printf("Enter feet:%f\r\n",c.m_feet);
	scanf("%f",&c.m_feet);
	printf("Enter inch:%f\r\n",c.m_inch);
	scanf("%f",&c.m_inch);
	return c;
};

struct Sdis Addnumbers(struct Sdis A,struct Sdis B)
{
struct Sdis D;
D.m_feet = A.m_feet+B.m_feet;
D.m_inch = A.m_inch+B.m_inch; 
return D;
}

void printdis(char name[],struct Sdis z)
{
printf("%s_summation of distance=%f",name,z.m_feet+(z.m_inch/10));

}

int main()
{
	struct Sdis x,y,z;
	x= Read_number("X");
	y= Read_number("Y");
	z= Addnumbers(x,y);
	printdis("z",z);
}


*/

///////////////////////////////////////////////EX3///////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include <stdio.h>
#include <math.h>

struct Sbase ///ana hena 3rft data type gdedah mn no3 struct//
{
	float m_real;
	float m_imaginary;

};
 ///=///////////////
 struct Sbase Read_complex(char name[]) //function of type struct that to read the complex no//
 {
	struct Sbase C;
	printf("enter the complex no Ex(4,5i)");
	scanf("%f,%f",&C.m_real,&C.m_imaginary);
	return C;
 }

//////////////////////////////////
struct Sbase Add_complex(struct Sbase A,struct Sbase b) // function to add of type struct that take x ,y of type struct
                                                        //store it in A,b
{
struct Sbase D;
D.m_real = A.m_real + b.m_real;
D.m_imaginary = A.m_imaginary + b.m_imaginary;
return D;// take care of return D
}
//////////////////////////////////////

void printcomplex (char name[],struct Sbase D)
{
	printf("%s=%f+i%f",name,D.m_real,D.m_imaginary);
}

///////////////////////////////////////
int main()
{ struct Sbase x,y,z;
	x= Read_complex("X");////call function read complex
	y= Read_complex("Y");////call function read complex
	z= Add_complex(x,y);////call function add complex
	printcomplex("z",z);
     
}
*/



///////////////////////////////////////////EX4/////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
/*#include <stdio.h>
#include<string.h>

struct sstudent
{
	char m_Name[50];
	int m_Marks_st;
	int m_Roll_Number_st;
};

int main()
{
	struct sstudent Student[10];// ten student for counter
	char Firstname[50];////same size as m_name in struct
	char secondname[50];////same size as m_name in struct
	int count = 0 ;

	do
	{
		printf("Enter first name student:\r\n");
		scanf("%s",Firstname);
		printf("Enter second name student:\r\n");
		scanf("%s",secondname);

		strcpy(Student[count].m_Name,Firstname);
		strcat(Student[count].m_Name,"");
		strcat(Student[count].m_Name,secondname);

		printf("Entermarks:\r\n");
		scanf("%d",&Student[count].m_Marks_st);

		printf("EnterrollNumber\r\n:");
		scanf("%d",&Student[count].m_Roll_Number_st);

		printf("student name is:%s\r\n",Student[count].m_Name);
		printf("student marks is:%d\r\n",Student[count].m_Marks_st);
		printf("student roll Number is:%d\r\n",Student[count].m_Roll_Number_st);
		count++; if(count==3) break;
		printf("do you want to continue press y for more\r\n");

	}
	while(getch() == 'y');
	return 0 ;
}*/



/////////////////////EX5/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include<stdio.h>
#include<math.h>

struct scircle 
{
	char m_name;
	float m_area;
	float m_radius;
	float m_circum;
};

struct scircle readradius(char name[])
{
	struct scircle c;
	printf ("Enter the radius\r\n");
	scanf("%f",&c.m_radius);
	return c; 	
}

struct scircle calculateArea(struct scircle A)
{
	struct scircle D;
	D.m_area=A.m_radius*M_PI*A.m_radius;
	return D;
}
struct scircle calculatecircumference(struct scircle A)
{
	struct scircle W;
	W.m_circum= 2*M_PI *A.m_radius;
	return W;
}

void printD(char name[],struct scircle D)
{
	printf("%sthe area is %f\r\n",name,D.m_area);
}

void printW(char name[],struct scircle W)
{
	printf("%s the circumference is %f\r\n",name,W.m_circum);
}

int main()
{
	char x ;
	struct scircle q,y,m,z;

	printf ("Enter the A to calculate area,Cto calculate circuference\r\n");
	scanf("%s",&x);

if(x=='A')
{
	y= readradius("Y");
	m= calculateArea(y);
	printD("M",m);
}
else if (x=='C')
{
	q= readradius("Q");
	z= calculatecircumference(q);///b3t al q struct_data_type to A_data_type
	printW("Z",z);
}
else
{
printf("the wrong");
}
}*/


////////////////////////////////////////////EX6//////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
 /*the output of structure is to add all the data type inside it.
 but the output of ounion is overlapping the so the max size of it is 
 the size of union*/
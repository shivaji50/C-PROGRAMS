////////////////////////////////////////////////////////////////////////////
//
// Function Name :  check()
// Description   :  To check number is divisible by 5 or not
// Input         :  Integer
// Output        :  Integer
// Author        :  Shivaji das
// Date          :  23 april 2021
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
//typedef int BOOL;
//#define TRUE 1
//#define FALSE 2

int check(int no1)
{
	if((no1%5)==0)
	{
		return 1;//TRUE;
	}
	else 
	{
		return 2;//FALSE;
	}
}
int main()
{
	int value=0;
	int ret=0;

	printf("Enter the number:\n");
	scanf("%d",&value);

	ret=check(value);

	if(ret==1)
		{printf("divisible by 5\n");}
	else
		{printf("not divisible\n");}
	return 0;
}
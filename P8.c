////////////////////////////////////////////////////////////////////////////
//
// Function Name :  check()
// Description   :   checks the given number is even or odd.
// Input         :  12 
// Output        :  True
// Author        :  Shivaji das
// Date          :  25 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL check(int no)
{
	if((no%2)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int value=0;
	BOOL ret=FALSE;
	printf("Enter the number\n");
	scanf("%d",&value);
	ret=check(value);
	if(ret==TRUE)
	{
		printf("Even number\n");
	}
	else
	{
		printf("odd number\n");
	}
	return 0;
}
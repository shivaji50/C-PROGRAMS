////////////////////////////////////////////////////////////////////////////
//
// Function Name :  dispaly()
// Description   :  Accept on number from user if number is less than 10 then print Hello otherwise print Demo. 
// Input         :  Integer
// Output        :  Hello/Demo.
// Author        :  Shivaji das
// Date          :  25 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
 
int display(int no) 
{
	if(no<10)
	{
		printf("HELLO");
	}
	else
	{
		printf("DEMO");
	}
}
int main()
{
	int value=0;
	printf("Enter the number");
	scanf("%d",&value);
	display(value);
	return 0;
}
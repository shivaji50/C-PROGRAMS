////////////////////////////////////////////////////////////////////////////
//
// Function Name :  dispaly()
// Description   :  Accept one number from user and print that number of * on screen. (using while loop)
// Input         :  Integer
// Output        :  ***
// Author        :  Shivaji das
// Date          :  25 april 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void display(int no)
{
	//int i=0;
	while(no>0)
	{
		printf("*\n");
		no--;
	}
}

int main()
{
	int value=0;
	printf("Enter number\n");
	scanf("%d",&value);
	display(value);
	return 0;
}
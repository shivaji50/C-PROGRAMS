////////////////////////////////////////////////////////////////////////////
//
// Function Name :  accept()
// Description   :  Accept one number from user and print that number of * on screen.
// Input         :  Integer
// Output        :  *
// Author        :  Shivaji das
// Date          :  23 april 2021
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void accept(int no)
{
	int cnt=0;
	for(cnt=1;cnt<=no;cnt++)
	{
		printf("*");
	}
}
int main()
{
	int value=0;
	printf("Enter the number of star u want to print\n");
	scanf("%d",&value);
	accept(value);
	return 0;
}
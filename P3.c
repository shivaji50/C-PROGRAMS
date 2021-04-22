////////////////////////////////////////////////////////////////////////////
//
// Function Name :  display()
// Description   :  To print 5 to 1 Number on screen
// Input         :  ----------
// Output        :  Integer
// Author        :  Shivaji das
// Date          :  23 april 2021
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void display()
{
	int i=0;
	//int i=5;
	for(i=5;i>0;i--)
	{
		printf("%d\n",i);
	}
}

int main()
{
	display();
	return 0;
}
////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Division()
// Description   :  Perform Division Of Two Numbers
// Input         :  Integer, Integer
// Output        :  Integer
// Author        :  Shivaji das
// Date          :  22 april 2021
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int divide(int no1,int no2)
{
	int ans=0;

	if(no2==0)
	{
		return -1;
	}

	ans=no1/no2;
	return ans;
}

int main()
{
	int value1=15,value=5;
	int ret=0;
	ret=divide(15,5);
	printf("Division is %d\n",ret);
	return 0;
}
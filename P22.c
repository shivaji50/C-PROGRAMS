///////////////////////////////////////////////////////////////////////////
//
// Function Name : count()
// Description   : accept number from user and count frequency of such a digits which are less than 6.
// Input         : 2395
// Output        : Frequency is 3
// Author        : Shivaji das
// Date          : 29 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
int count(int no)
{
	int digit=0;
	int cnt=0;
	if(no<0)
	{
		no=-no;
	}

	while(no>0)
	{
		digit=no%10;
		if(digit<6)
		{
          cnt++;
		}
		no=no/10;
	}
	return cnt;


}

int main()
{
	int v=0;
	int ret=0;

	printf("Enter the number");
	scanf("%d",&v);

	ret=count(v);
	printf("The frequency of number which is less then 6 is %d",ret);

	return 0;
}
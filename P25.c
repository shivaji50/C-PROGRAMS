///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : count()
// Description   : accept number from user and return the count of digits in between 3 and 7.
// Input         : 2395
// Output        : Frequency is 1
// Author        : Shivaji das
// Date          : 30 april 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
		if((digit>3)&&(digit<7))
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
	printf("There are %d digit ",ret);

	return 0;
}
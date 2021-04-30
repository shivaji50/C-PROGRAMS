//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : count()
// Description   : accept number from user and return difference between summation of even digits and summation of odd digits
// Input         : 2395
// Output        : -15 (2 - 17)
// Author        : Shivaji das
// Date          : 30 april 2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdio.h>
int count(int no)
{
	int digit=0;
	int even=0;
	int odd=0,dif=0;
	if(no<0)
	{
		no=-no;
	}

	while(no>0)
	{
		digit=no%10;
		if(digit%2==0)
		{
          even=even+digit;
		}
		else if(digit%2!=0)
		{
          odd=odd+digit;
		}
		no=no/10;
	}

		return dif=even-odd; 
}

int main()
{
	int v=0;
	int ret=0;

	printf("Enter the number");
	scanf("%d",&v);

	ret=count(v);
	printf("The difference is %d",ret);

	return 0;
}
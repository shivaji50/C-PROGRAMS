//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : count()
// Description   : accept number from user and return multiplication of all digits.
// Input         : 2395
// Output        : 270
// Author        : Shivaji das
// Date          : 30 april 2021
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
int count(int no)
{
	int digit=0;
	int mult=1;
	if(no<0)
	{
		no=-no;
	}

	while(no>0)
	{

		digit=no%10;
		if(digit!=0)
		{
		  mult=mult*digit;	
		}
		 no=no/10;
	}
	return mult;


}

int main()
{
	int v=0;
	int ret=0;

	printf("Enter the number");
	scanf("%d",&v);

	ret=count(v);
	printf("The Multiplication of the number is %d",ret);

	return 0;
}
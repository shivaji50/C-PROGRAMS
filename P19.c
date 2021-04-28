///////////////////////////////////////////////////////////////////////////
//
// Function Name : rev()
// Description   : accept number from user and check whether it contains 0 in it or not.
// Input         : 2395
// Output        : There is no Zero 
// Author        : Shivaji das
// Date          : 29 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#define TRUE 0;
#define FALSE 1;
int rev(int no)
{
	int digit=0;
	int zero=0;
	if(no<0)
	{
		no=-no;
	}

	while(no>0)
	{
		digit=no%10;
		if(digit==0)
		{
			zero=digit;
		}
		
		no=no/10;
    }
    if(zero==0)
    {
    	return 0;
    }
    else 
    {
    	return 1;
    }

}

int main()
{
	int n=0;
	int ret=0;

	printf("Enter the number");
	scanf("%d",&n);

	ret=rev(n);

	if(ret==0)
	{
		printf("It coints zero");
	}
	else
	{
		printf("No zero");
	}
	return 0;
}
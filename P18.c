///////////////////////////////////////////////////////////////////////////
//
// Function Name : rev()
// Description   : accept number from user and display its digits in reverse
// Input         : 2395
// Output        :  5 
//                  9 
//                  3 
//                  2
// Author        : Shivaji das
// Date          : 29 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
void rev(int no)
{
	int digit=0;
	if(no<0)
	{
		no=-no;
	}

	while(no>0)
	{
		digit=no%10;
		printf("%d\n",digit);
		no=no/10;
    }

}

int main()
{
	int n=0;
	int ret=0;

	printf("Enter the number");
	scanf("%d",&n);

	rev(n);
}
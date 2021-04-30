/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : pattern()
// Description   : accept number from user and print numbers till that number. 
// Input         : 8
// Output        : 1 2 3 4 5 6 7 8 
// Author        : Shivaji das
// Date          : 1 May 2021
//
///////////////////////////////////////////////////
#include<stdio.h>
void pattern(int no)
{
	int icnt=0;
	if(no<0)
	{
		no=-no;
	}

	for(icnt=1;icnt<=no;icnt++)
	{
		printf("%d  ",icnt);
	}

}

int main()
{
	int i=0;

	printf("Enter the number");
	scanf("%d",&i);

	pattern(i);

	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : pattern()
// Description   : accept number from user and print that number of $ & * on screen. 
// Input         : 5
// Output        : $ * $ * $ * $ * $ *
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
		printf("$\t*\t");
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
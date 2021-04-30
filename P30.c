/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display()
// Description   : accept number from user and print its numbers line
// Input         : 4
// Output        : -4 -3 -2 -1 0 1 2 3 4
// Author        : Shivaji das
// Date          : 1 May 2021
//
///////////////////////////////////////////////////
#include<stdio.h>
void Display(int no)
{
	int icnt=0;
	if(no<0)
	{
		no=-no;
	}

	for(icnt=-no;icnt<=no;icnt++)
	{
		printf("%d  ",icnt);
	}

}

int main()
{
	int i=0;

	printf("Enter the number");
	scanf("%d",&i);

	Display(i);

	return 0;
}
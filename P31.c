/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display()
// Description   : accepts N from user and print all odd numbers up to N
// Input         : 18
// Output        : 1 3 5 7 9 11 13 
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

	for(icnt=1;icnt<=no;icnt++)
		if(icnt%2!=0)
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
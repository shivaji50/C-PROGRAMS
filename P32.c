/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display()
// Description   : accept N and print first 5 multiples of N
// Input         : 4
// Output        : 4 8 12 16 20 
// Author        : Shivaji das
// Date          : 1 May 2021
//
///////////////////////////////////////////////////
#include<stdio.h>
void Display(int no)
{
	int icnt=0,mult=0;
	if(no<0)
	{
		no=-no;
	}

	for(icnt=1;icnt<=5;icnt++)
	{
		mult=icnt*no;
		printf("%d ",mult);
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
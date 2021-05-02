///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display()
// Description   : accept accept range from user and display all numbers in 
// between that range in reverse order. 
// Input         : 23 35
// Output        : 35 34 33 32 31 30 29 28 27 26 25 24 23
// Author        : Shivaji das
// Date          : 2 May 2021
//
///////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Display(int nos,int noe)
{
	int icnt=0;
	if(nos>noe)
	{   
		printf("Invalid range\n");
		return;
	}

	for(icnt=noe;icnt>=nos;icnt--)
	{
		
		printf("%d ",icnt);
	}
		
}

int main()
{
	int i=0,j=0;

	printf("Enter the Start\n");
	scanf(" %d",&i);

	printf("Enter the End\n");
	scanf("%d",&j);


	Display(i,j);

	return 0;
}
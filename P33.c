/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display()
// Description   : accept range from user and display all numbers in between that range.
// Input         : 23 35
// Output        : 23 24 25 26 27 28 29 30 31 32 33 34 35
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

	for(icnt=nos;icnt<=noe;icnt++)
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
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : display pattern
// Input         : 5
// Output        : * * * * *
// Author        : Shivaji das
// Date          : 5 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int iNo)
{
	static int i=1;

   if(i<=iNo)
   {
   	printf("*\t");
   	i++;
   	DisplayR(iNo);
   }
}

int main()
{
	int iValue=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);
	DisplayR(iValue);
	printf("\n End of main\n");
	return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : display pattern
// Input         : 5
// Output        : 5 4 3 2 1 
// Author        : Shivaji das
// Date          : 5 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int iNo)
{
   if(iNo>0)
   {
   	printf("%d\t",iNo);
   	iNo--;
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
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : display pattern
// Input         : 5
// Output        : 1 2 3 4 5
// Author        : Shivaji das
// Date          : 5 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int iNo)
{
	static int i=1;

   if(i<=iNo)
   {
   	printf("%d\t",i);
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
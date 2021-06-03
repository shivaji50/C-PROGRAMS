//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : display pattern
// Input         : NULL
// Output        : 1 2 3 4 5 
// Author        : Shivaji das
// Date          : 3 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR()
{
   static int i=1;

   if(i<=5)
   {
   	printf("%d\t",i);
   	i++;
   	DisplayR();
   }
}

int main()
{
	DisplayR();
	printf("\nEnd of main\n");
	return 0;
}
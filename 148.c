//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : display pattern
// Input         : NULL
// Output        : 5 4 3 2 1 
// Author        : Shivaji das
// Date          : 3 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR()
{
   static int i=5;

   if(i>0)
   {
   	printf("%d\t",i);
   	i--;
   	DisplayR();
   }
}

int main()
{
	DisplayR();
	printf("\nEnd of main\n");
	return 0;
}

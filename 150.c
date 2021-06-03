//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : display pattern
// Input         : NULL
// Output        : a b c d e f 
// Author        : Shivaji das
// Date          : 3 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR()
{
   static char i='a';

   if(i<='f')
   {
   	printf("%c\t",i);
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

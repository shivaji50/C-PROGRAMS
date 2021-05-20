////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Display Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
// Input         : A
// Output        : Different numeric values            
// Author        : Shivaji das
// Date          : 20 May 2021
//////////////////////////////////////////////////////////////
#include<stdio.h>

void Display()
{
  int i=0;
  for(i=0;i<129;i++)
  {
    printf("%d\t%c\t\n",i,i);
  }
}

int main()
{
  char cvalue='\0';
  Display();
  

  return 0;
}
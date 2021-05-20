///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : display its ASCII value in decimal, octal and hexadecimal format.
// Input         : A
// Output        : Decimal 65
//                 Octal 0101 
//                 Hexadecimal 0X41
// Author        : Shivaji das
// Date          : 20 May 2021
////////////////////////////////////////////////////
#include<stdio.h>

void Display(char ch)
{
     printf("%d\t%o\t%x\t\n",ch,ch,ch);
}    

int main()
{
  char cvalue='\0';
  printf("Enter the character\n");
  scanf("%c",&cvalue);
  Display(cvalue);
  

  return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Toggle character
// Input         : g
// Output        : G           
// Author        : Shivaji das
// Date          : 20 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
void Display(char ch)
{
  if((ch>='A')&&(ch<='Z'))
  {
  	ch=ch+32;
    printf("%c\n",ch);
  }
  else if((ch>='a')&&(ch<='z'))
  {
    ch=ch-32;
    printf("%c\n",ch);
  }
  else
  {
  	printf("%c",ch);
  }
}

int main()
{
  char cvalue='\0';
  printf("Enter the character\n");
  scanf("%c",&cvalue);
  Display(cvalue);
  

  return 0;
}
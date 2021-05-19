////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : checkAlpha 
// Description   : depends on the division display exam timing
// Input         : C
// Output        : Your exam at 9.20 AM        
// Author        : Shivaji das
// Date          : 19 May 2021
//////////////////////////////////////////////////////////////
#include<stdio.h>


void Display(char ch)
{
  if((ch=='A')||(ch=='a'))
  {
    printf("Your exam at 7-AM\n");
  }
  else if((ch=='B')||(ch=='b'))
  {
    printf("Your exam at 8:30-AM\n");
  }
  else if((ch=='C')||(ch=='c'))
  {
    printf("Your exam at 9:20-AM\n");
  }
  else if((ch=='D')||(ch=='d'))
  {
    printf("Your exam at 10:30-AM\n");
  }

}

int main()
{
  char cvalue='\0';

  printf("Enter your character\n");
  scanf("%c",&cvalue);

  Display(cvalue);
  return 0;
}
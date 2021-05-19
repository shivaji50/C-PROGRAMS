////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : checkAlpha 
// Description   : check whether it is alphabet or not (A-Z a-z)
// Input         : F
// Output        : TRUE            
// Author        : Shivaji das
// Date          : 19 May 2021
//////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL checkAlpha(char ch)
{
  if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
  {
  	return TRUE;
  }
  else
  {
  	return FALSE;
  }
}

int main()
{
  char cvalue='\0';
  BOOL bret=FALSE;

  printf("Enter your character\n");
  scanf("%c",&cvalue);

  bret=checkAlpha(cvalue);

  if(bret==TRUE)
  {
  	printf("It is character\n");
  }
  else
  {
  	printf("It is not a character\n");
  }

  return 0;
}
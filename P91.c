////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : checkAlpha 
// Description   : check whether it is small case or not (a-z). 
// Input         : g
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
  if((ch>='a')&&(ch<='z'))
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
  	printf("Its small character\n");
  }
  else
  {
  	printf("It is not a small character\n");
  }

  return 0;
}
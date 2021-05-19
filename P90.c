////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : checkAlpha 
// Description   : check whether it is digit or not (0-9).
// Input         : 7
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
  if((ch>=48)&&(ch<=57))
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
  	printf("Its digit\n");
  }
  else
  {
  	printf("It is not digit\n");
  }

  return 0;
}
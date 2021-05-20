////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
// Input         : %
// Output        : TRUE           
// Author        : Shivaji das
// Date          : 20 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL checkAlpha(char ch)
{
  if((ch>='!')&&(ch<='*')||ch=='@'||(ch=='^'))
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
  	printf("It is special character\n");
  }
  else
  {
  	printf("It is not a special character\n");
  }

  return 0;
}
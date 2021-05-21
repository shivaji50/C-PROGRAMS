///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Vowel
// Description   : check whether it contains vowels in it or not. 
// Input         : “marvellous” 
// Output        : TRUE
// Author        : Shivaji das
// Date          : 21 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Vowel(char *str)
{
  int yes=0;
  if(str==NULL)
{
  return 0;
}
while(*str != '\0')
{
  if((*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U')||(*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
  { 
    yes=1;
    break;
  }
  str++;
}
if(yes>0)
{
  return yes;
}
else
{
  return 0;
}
  
}

int main()
{
 char arr[20];
 int iRet = 0;

printf("Enter string");
scanf("%[^'\n']s",arr);

iRet = Vowel(arr);

  if(iRet==TRUE)
  {
  	printf("Contains Vowel\n");
  }
  else
  {
  	printf("No Vowel\n");
  }

  return 0;
}
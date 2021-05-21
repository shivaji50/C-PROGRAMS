///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountCapital
// Description   : count number of small characters.
// Input         : “Marvellous” 
// Output        : 9
// Author        : Shivaji das
// Date          : 21 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
int CountCapital(char *str)
{
int iCnt = 0;

if(str==NULL)
{
	return 0;
}


while(*str != '\0')
{
  if((*str>='a')&&(*str<='z'))
  {
  	iCnt++;
  }
  str++;
}

return iCnt;
}

int main()
{
char arr[20];
int iRet = 0;

printf("Enter string");
scanf("%[^'\n']s",arr);

iRet = CountCapital(arr);

printf("%d",iRet);

return 0;
}
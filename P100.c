///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountCapital
// Description   : return difference between frequency of small characters and frequency of capital characters. 
// Input         : “Marvellous” 
// Output        :  6 (8-2) 
// Author        : Shivaji das
// Date          : 21 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
int CountCapital(char *str)
{
int dif=0,CiCnt=0,iCnt=0;

if(str==NULL)
{
	return 0;
}


while(*str != '\0')
{
  if((*str>='A')&&(*str<='Z'))
  {
  	CiCnt++;
  }
  else
  {
  	iCnt++;
  }
  str++;
}

return dif=iCnt-CiCnt;
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
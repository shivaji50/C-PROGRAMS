///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : toggle the case
// Input         : Marvellous Multi OS
// Output        : mARVELLOUS mULTI os
// Author        : Shivaji das
// Date          : 22 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
void Display(char *str)
{
  int icnt=0;
  while(*str!='\0')
  {
    if((*str>='A')&&(*str<='Z'))
    {
      *str=*str+32;
    }
    else if((*str>='a')&&(*str<='z'))
    {
      *str=*str-32;
    }
    str++;
  }
}

int main()
{
char arr[20];
printf("Enter string\n");
scanf("%[^'\n']s",arr);

Display(arr);
printf("updated string %s \n",arr);
return 0;
}
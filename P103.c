///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : convert it into lower case.
// Input         : Marvellous Multi OS
// Output        : marvellous multi os
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
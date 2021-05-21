///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : display it in reverse order.
// Input         : “MarvellousS” 
// Output        : “SuollevraM”
// Author        : Shivaji das
// Date          : 21 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
int Display(char *str)
{
  int icnt=0;
  while(*str!='\0')
  {
    icnt++;
    str++;
  }
  str=str-1;
  while(icnt>0)
  {
    printf("%c",*str);
    str--;
    icnt--;
  }
}

int main()
{
char arr[20];
printf("Enter string");
scanf("%[^'\n']s",arr);

Display(arr);
return 0;
}
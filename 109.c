///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : count
// Description   : Return frequency of character
// Input         : Marvellous Multi OS
//                 M
// Output        : 2
// Author        : Shivaji das
// Date          : 23 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
int count(char *str,char ch)
{
	int icnt=0;
    while(*str!='\0')
    {
      if(*str==ch)
	  { 
	  	icnt++;
	  }
    str++;
	} 
	return icnt;
}   

int main()
{
	char arr[20];
	char cvalue;
	int iret=0;
	 printf("enter string: ");
	 scanf("%[^'\n']s",arr);
	 
	 printf("enter the character ");
	 scanf(" %c",&cvalue);
	 
	 iret=count(arr,cvalue);
	 printf("character frequency is %d",iret);
	 
	 return 0;
	 
}
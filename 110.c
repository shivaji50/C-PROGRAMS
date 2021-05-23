///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : count
// Description   : Return index of first occurrence of character
// Input         : Marvellous Multi OS
//                 M
// Output        : 0
// Author        : Shivaji das
// Date          : 23 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>
int count(char *str,char ch)
{
	int icnt=0; 

	while(*str!='\0')
    {
      if(*str==ch)
	 { 
	  	break;
	 }
	 str++;
    icnt++;
    } 
	if(*str!=ch)
	{
		return -1;
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
	 printf("Index of first occurance is %d",iret);
	 
	 return 0;
	 
}
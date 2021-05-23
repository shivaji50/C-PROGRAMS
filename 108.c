///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : chk
// Description   : Check whether that character is present in string or not.
// Input         : Marvellous Multi OS
//                 e
// Output        : TRUE 
// Author        : Shivaji das
// Date          : 23 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#define true 1
#define false 0

int chk(char *str,char ch)
{
	int icnt=0;
    while(*str!='\0')
    {
      if(*str==ch)
	  {  icnt=1;
              break;
	  }
    str++;
	} 
	return icnt;
}
int main()
{
	char arr[20];
	char cvalue;
	char bret=false;
	printf("enter the string :");
	scanf("%[^'\n']s",arr);
	printf("enter the character");
	scanf(" %c",&cvalue);
	bret=chk(arr,cvalue);
	if(bret==true)
	{
		printf("character found");
	}
    else
	{
        printf("character not found");
    }
return 0;
}
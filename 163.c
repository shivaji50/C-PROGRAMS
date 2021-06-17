//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : count number of small characters.
// Input         : HElloWOrlD
// Output        : 5
// Author        : Shivaji das
// Date          : 17 June 2021
//////////////////////////////////////////////////////
#include<stdio.h>

int DisplayR(char *str)
{
   static int icnt=0;
   if(*str!='\0')
   {
   	if((*str>='a')&&(*str<='z'))
   	{
   		icnt++;
   	}
   	str++;
   	DisplayR(str);
   }
   return icnt;

}

int main()
{
	int iRet=0;
	char arr[30];
	printf("Enter String\n");
	scanf(" %[^'\n']s",arr);
	iRet=DisplayR(arr);
	printf("The Count of small character is %d",iRet);
	printf("\nEnd of main\n");
	return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : count number of characters. 
// Input         : Hello
// Output        : 5
// Author        : Shivaji das
// Date          : 11 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

int DisplayR(char *str)
{
   static int icnt=0;
   if(*str!='\0')
   {
   	icnt++;
   	str++;
   	DisplayR(str);
   }
   return icnt;

}

int main()
{
	int iRet=0;
	char arr[20];
	printf("Enter String\n");
	scanf("%s",arr);
	iRet=DisplayR(arr);
	printf("The Count of character is %d",iRet);
	printf("\nEnd of main\n");
	return 0;
}
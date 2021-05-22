///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : count number of white spaces
// Input         : MarvellouS Infosystems by Piyush Manohar Khairnnar
// Output        : 5
// Author        : Shivaji das
// Date          : 22 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
int cha(char *str)
{
	int icnt=0;
	if(str==NULL)
	{ return 0; }
    while(*str!='\0')
	{
		if(*str==' ')
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
	int iret=0;
	printf("enter string :");
	scanf("%[^'\n']s",arr);
	iret=cha(arr);
	printf("%d",iret);
	return 0;
	
}
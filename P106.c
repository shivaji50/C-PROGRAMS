///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : display only digits from string.
// Input         : marve89llous121
// Output        : 89121
// Author        : Shivaji das
// Date          : 22 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
void display(char *str)
{
	if(str==NULL)
	{ return ; }
    while(*str!='\0')
	{
		if((*str>=48)&&(*str<=57))
		{
			printf("%c",*str);
		}
		
		str++;
     }
}
int main()
{
	char arr[20];
	
	printf("enter string :");
	scanf("%[^'\n']s",arr);
	display(arr);
	return 0;
	
}
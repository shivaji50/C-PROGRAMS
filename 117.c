///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCpyX
// Description   : concat second string after first string. (Implement strcat() function).
// Input         : “Marvellous Infosystems”
//                 “Logic Building” 
// Output        : “Marvellous Infosystems Logic Building”
// Author        : Shivaji das
// Date          : 24 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>

void StrCpyX(char *src, char *dest)
{

while(*src != '\0')
{
	src++;
}

strcat(src,dest);
}

int main()
{
char arr[30]="Marvellous Multi Os";
char brr[30]="Logic building";

StrCpyX(arr,brr);

printf("%s",arr);
return 0;
}
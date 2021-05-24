///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCpyX
// Description   : copy the contents of that string into another string. (Implement strcpy() function)
// Input         : “Marvellous Multi OS”
// Output        : “Marvellous Multi OS” 
// Author        : Shivaji das
// Date          : 24 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>

void StrCpyX(char *src, char *dest)
{

while(*src != '\0')
{
*dest = *src;
src++;
dest++;
}
 strcpy(dest,src);
}

int main()
{
char arr[30]="Marvellous multi os";
char brr[30]; // Empty string

StrCpyX(arr,brr);

printf("%s",brr);
return 0;
}
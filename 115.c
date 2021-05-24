///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : StrCpyX
// Description   : copy capital characters of that string into another string. 
// Input         : “Marvellous Multi OS”
// Output        : “MMOS” 
// Author        : Shivaji das
// Date          : 24 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>

void StrCpyX(char *src, char *dest)
{

while(*src != '\0')
{
if((*src>='A')&&(*src<='Z'))
{
*dest = *src;
dest++;
}
src++;
}
strcpy(dest,src);
}

int main()
{
char arr[30]="Marvellous Multi Os";
char brr[30]; // Empty string

StrCpyX(arr,brr);

printf("%s",brr);
return 0;
}
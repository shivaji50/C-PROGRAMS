////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Even()
// Description   : Accept one character from user and convert case of that character
// Input         :  Character
// Output        :  Character
// Author        :  Shivaji das
// Date          :  27 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void accept(char ch)
{
   if((ch>='a')&&(ch<='z'))
   {
   	ch=ch-32;
   	printf("%c",ch);
   }
   else if((ch>='A')&&(ch<='Z'))
   {
   	ch=ch+32;
   	printf("%c",ch);
   }
   
   
}
int main()
{
	char c='\0';
	printf("Enter the character");
	scanf("%c",&c);
	//gets(c);
	accept(c);
	return 0;
}
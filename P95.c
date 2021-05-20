////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : If it is capital then display all the 
// characters from the input characters till Z. If input character is small 
// then print all the characters in reverse order till a. In other cases 
// return directly.
// Input         : Q
// Output        : Q R S T U V W X Y Z            
// Author        : Shivaji das
// Date          : 20 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
void Display(char ch)
{
  if((ch>='A')&&(ch<='Z'))
  {
  	while(ch<='Z')
    {
      printf("%c ",ch);
      ch++;
    }
  }
  else if((ch>='a')&&(ch<='z'))
  {
    while(ch>='a')
    {
      printf("%c ",ch);
      ch--;
    }
  }
  else
  {
  	printf("%c",ch);
  }
}

int main()
{
  char cvalue='\0';
  printf("Enter the character\n");
  scanf("%c",&cvalue);
  Display(cvalue);
  

  return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : display pattern
// Input         : 6
// Output        : a b c d e f 
// Author        : Shivaji das
// Date          : 5 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int iNo)
{
   static char ch='a';
   static int i=1;

   if(i<=iNo)
   {
   	printf("%c\t",ch);
   	ch++;
   	i++;
   	DisplayR(iNo);
   }
}

int main()
{
   int iValue=0;

   printf("Enter the number\n");
   scanf("%d",&iValue);
   DisplayR(iValue);
   printf("\n End of main\n");
   return 0;
}
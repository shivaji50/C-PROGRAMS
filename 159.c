//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : return factorial.
// Input         : 5
// Output        : 120
// Author        : Shivaji das
// Date          : 11 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

int DisplayR(int iNo)
{
	static int iFac=1;

   if(iNo>0)
   {
   	iFac=iFac*iNo;
   	iNo--;
   	DisplayR(iNo);
   }
   return iFac;
}

int main()
{
	int iValue=0,iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	iRet=DisplayR(iValue);
	printf("The factorial of the given number is %d",iRet);
	printf("\nEnd of main\n");
	return 0;
}
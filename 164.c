//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : return smallest digit 
// Input         : 87983 
// Output        : 3
// Author        : Shivaji das
// Date          : 17 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

int DisplayR(int iNo)
{
  static int iSum=9;
  static int iDigit=0;
  
  if(iNo>0)
  {
  	iDigit=iNo%10;
   
   if(iDigit<iSum)
   {
    iSum=iDigit;
   }

  	iNo=iNo/10;
  	DisplayR(iNo);
  }
  return iSum;
}

int main()
{
	int iValue=0,iSum=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	iSum=DisplayR(iValue);
	printf("The Smallest Digit is %d",iSum);
	printf("\nEnd of main\n");
	return 0;
}
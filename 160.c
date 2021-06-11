//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : return product of digits.
// Input         : 523
// Output        : 30
// Author        : Shivaji das
// Date          : 11 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

int DisplayR(int iNo)
{
  static int iFac=1;
  int iDigit=0;
  if(iNo>0)
  {
  	iDigit=iNo%10;
  	iFac=iFac*iDigit;
  	iNo=iNo/10;
  	DisplayR(iNo);
  }
  return iFac;
}

int main()
{
	int iValue=0,iSum=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	iSum=DisplayR(iValue);
	printf("The Product of the Digit is %d",iSum);
	printf("\nEnd of main\n");
	return 0;
}
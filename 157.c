//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : return summation of its digits. 
// Input         : 879
// Output        : 24
// Author        : Shivaji das
// Date          : 11 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

int DisplayR(int iNo)
{
  static int iSum=0;
  int iDigit=0;
  if(iNo>0)
  {
  	iDigit=iNo%10;
  	iSum=iSum+iDigit;
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
	printf("The sum of the Digit is %d",iSum);
	printf("\nEnd of main\n");
	return 0;
}
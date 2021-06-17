//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : reverse number
// Input         : 523
// Output        : 325
// Author        : Shivaji das
// Date          : 17 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

int DisplayR(int iNo)
{
 static int sum=0;
 int iDigit=0;

  if(iNo>0)
  {
    iDigit=iNo%10;
  	sum = sum*10 + iDigit;
  	iNo=iNo/10;
  	DisplayR(iNo);
  }
  return sum;
  
}

int main()
{
	int iValue=0,iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	iRet=DisplayR(iValue);
  printf("The reverse number is %d",iRet);
	
	printf("\nEnd of main\n");
	return 0;
}
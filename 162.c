//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayR
// Description   : return largest digit 
// Input         : 87983 
// Output        : 9
// Author        : Shivaji das
// Date          : 17 June 2021
//////////////////////////////////////////////////////

#include<stdio.h>

int DisplayR(int iNo)
{
  static int iSum=0;
  int iDigit=0;
  if(iNo>0)
  {
    iDigit=iNo%10;
    if(iDigit>iSum)
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
    printf("The Largest Digit is %d",iSum);
    printf("\nEnd of main\n");
    return 0;
}
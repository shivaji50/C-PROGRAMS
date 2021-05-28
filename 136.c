//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountBit
// Description   : check whether bit at first or bit at second position is ON or OFF. 
// Input         : 10 3 7 
// Output        : TRUE
// Author        : Shivaji das
// Date          : 28 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckBit(unsigned int iNo,int iPos1,int iPos2)
{
    
    unsigned int iMask=0x00000001;
    unsigned int iResult=0;
    iMask=iMask<<(iPos1-1);
    iResult=iNo & iMask;
    unsigned int iMask1=0x00000001;
    unsigned int iResult1=0;
    iMask1=iMask1<<(iPos2-1);
    iResult1=iNo & iMask1;
    if((iResult==iMask)||(iResult1==iMask1))
    {
    	return true;
    } 
    else
    {
    	return false;
    }
}

int main()
{
	unsigned int iValue=0,iPos1=0,iPos2=0;
	bool bret=0;

	printf("Enter number\n");
	scanf("%u",&iValue);
	printf("Enter first position\n");
    scanf("%d",&iPos1);
    printf("Enter second position\n");
    scanf("%d",&iPos2);


	bret=CheckBit(iValue,iPos1,iPos2);

	if(bret==true)
	{
		printf("bit is on\n");
	}
	else
	{
		printf("bit is off\n");
	}

	return 0;
}
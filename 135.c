//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountBit
// Description   : check whether 9th or 12th bit is on or off.
// Input         : 257
// Output        : TRUE
// Author        : Shivaji das
// Date          : 28 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckBit(unsigned int iNo)
{
    
    unsigned int iMask=0x00000100;
    unsigned int iResult=0;
    iResult=iNo & iMask;
    unsigned int iMask1=0x00000800;
    unsigned int iResult1=0;
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
	unsigned int iValue=0;
	bool bret=0;

	printf("Enter number\n");
	scanf("%d",&iValue);
	bret=CheckBit(iValue);

	if(bret==true)
	{
		printf("12th&9th bit is on\n");
	}
	else
	{
		printf("12th&9th bit is off\n");
	}

	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckBit
// Description   : checks whether 15th bit is On or OFF.
// Input         : INTEGER
// Output        : TRUE/FALSE
// Author        : Shivaji das
// Date          : 25 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckBit(unsigned int iNo)
{
    unsigned int iMask=0x00004000;
    unsigned int iResult=0;
    iResult=iNo & iMask;
    if(iResult==iMask)
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
	bool bret;

	printf("Enter number\n");
	scanf("%d",&iValue);
	bret=CheckBit(iValue);

	if(bret==true)
	{
		printf("15th bit is on\n");
	}
	else
	{
		printf("15th bit is off\n");
	}

	return 0;
}
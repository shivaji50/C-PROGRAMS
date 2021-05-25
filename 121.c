///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckBit
// Description   : checks whether 7th & 8th & 9th bit is On or OFF. 
// Input         : INTEGER
// Output        : TRUE/FALSE
// Author        : Shivaji das
// Date          : 25 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckBit(unsigned int iNo)
{
    unsigned int iMask=0x000001C0;
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
		printf("7,8,9 bit is on\n");
	}
	else
	{
		printf("7,8,9 bit is off\n");
	}

	return 0;
}
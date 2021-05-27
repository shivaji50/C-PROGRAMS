//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckBit
// Description   : If bit is one return TURE otherwise return FALSE.
// Input         : 10 2
// Output        : TRUE 
// Author        : Shivaji das
// Date          : 27 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool CheckBit(unsigned int iNo,int iPos)
{
    unsigned int iMask=0x00000001;
    unsigned int iResult=0;
    if((iPos<1)||(iPos>32))
    {
    	return false;
    }
    iMask=iMask<<(iPos-1);
    iResult=iNo|iMask;
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
	unsigned int iValue=0,iPos=0;
	bool bret=0;
	
    printf("Enter number\n");
	scanf("%d",&iValue);
	printf("Enter Position\n");
	scanf(" %d",&iPos);
	bret=CheckBit(iValue,iPos);
	if(bret==true)
	{
		printf(" bit is on\n");
	}
	else
	{
		printf(" bit is off\n");
	}
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckBit
// Description   : off that bit. Return modified number.
// Input         : 10 2
// Output        : 8
// Author        : Shivaji das
// Date          : 27 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
unsigned int CheckBit(unsigned int iNo,int iPos)
{
    unsigned int iMask=0x00000001;
    unsigned int iResult=0;
    if((iPos<1)||(iPos>32))
    {
    	return false;
    }

    iMask=iMask<<(iPos-1);
    iMask=~iMask;
    iResult=iNo&iMask;
    return iResult;
}

int main()
{
	unsigned int iValue=0,iPos=0,bret=0;
	


	printf("Enter number\n");
	scanf("%d",&iValue);
	printf("Enter Position\n");
	scanf(" %d",&iPos);
	bret=CheckBit(iValue,iPos);

	printf("updated number is :%u\n",bret);

	
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckBit
// Description   : toggle 7th and 10th bit of that number if it is on. Return modified number. 
// Input         : 137
// Output        : 713
// Author        : Shivaji das
// Date          : 26 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
unsigned int CheckBit(unsigned int iNo)
{
    unsigned int iMask=0x00000240;
    unsigned int iResult=0;    
    iResult=iNo^iMask;
    return iResult;
}

int main()
{
	unsigned int iValue=0,bret=0;
	


	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bret=CheckBit(iValue);

	printf("updated number is :%u\n",bret);

	
	return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckBit
// Description   :  toggle contents of first and last nibble of the number. Return modified number. (Nibble is a 
//                  group of four bits)
// Input         : 10 3
// Output        : 2
// Author        : Shivaji das
// Date          : 27 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
unsigned int CheckBit(unsigned int iNo)
{
    unsigned int iMask=0xF000000F;
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
}
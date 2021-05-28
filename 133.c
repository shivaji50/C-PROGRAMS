//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountBit
// Description   : count number of ON (1) bits in it without using % and / operator. 
// Input         : 11
// Output        : 3
// Author        : Shivaji das
// Date          : 28 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
int CountBit(unsigned int iNo)
{
    unsigned int iMask = 0X00000001, iResult=0;              
    int iCnt = 0, i = 0;
    for(i = 0; i < 32; i++)
    {
        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            iCnt++;
        }
        iMask = iMask << 1;
    }
    return iCnt;
}
    
int main()
{
    unsigned int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = CountBit(iValue);
    printf("Total ON bits are : %d\n",iRet);
    return 0;
}




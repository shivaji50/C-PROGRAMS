//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountBit
// Description   : display position of common ON bits from that two numbers.  
// Input         : 10 15 (1010 1111)
// Output        : 2 4 
// Author        : Shivaji das
// Date          : 28 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
void CountBit(unsigned int iNo1,unsigned int iNo2)
{
    unsigned int iResult=0;              
    int iCnt = 1,i=0,idigit=0;
    iResult=iNo1&iNo2;
    for(i=0;i<32;i++)
    {
        idigit=iResult%2;
        if(idigit==1)
        {
            printf("%u ",iCnt);
        }
        iResult=iResult/2;
        iCnt++;
    }
}
    
int main()
{
    unsigned int iValue1=0,iValue2=0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue1);
    printf("Enter number\n");
    scanf(" %u",&iValue2);
    
    CountBit(iValue1,iValue2);
    
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : pattern()
// Description   : display pattern
// Input         : 5
// Output        : 5 # 4 # 3 # 2 # 1 # 
// Author        : Shivaji das
// Date          : 3 May 2021
//
///////////////////////////////////////////////////
#include<stdio.h>

void pattern(int no)
{
	int i=0;
	
    
    for(i=no;i>0;i--)
    {
    	printf("%d\t#\t",i);
    	
    }

}

int main()
{
	int value=0;

	printf("Enter the number");
	scanf("%d",&value);
    pattern(value);
	return 0;
}
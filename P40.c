///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : pattern()
// Description   : display pattern
// Input         : 5
// Output        : 1 * 2 * 3 * 4 * 5 * 
// Author        : Shivaji das
// Date          : 3 May 2021
//
///////////////////////////////////////////////////
#include<stdio.h>

void pattern(int no)
{
	int i=0;
	
    
    for(i=1;i<=no;i++)
    {
    	printf("%d\t*\t",i);
    	
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
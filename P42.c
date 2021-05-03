/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : pattern()
// Description   : display pattern
// Input         : 8
// Output        : 2 4 6 8 10 12 14 16
// Author        : Shivaji das
// Date          : 3 May 2021
//
///////////////////////////////////////////////////
#include<stdio.h>
void pattern(int no)
{
	int i=0;
    if(no<0)
    {
        no=-no;
    }
	for(i=2;i<=no*2;i=i+2)
    {	
    	printf("%d\t",i);
        
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
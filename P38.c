///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : pattern()
// Description   : display pattern
// Input         : 5
// Output        : A B C D E
// Author        : Shivaji das
// Date          : 3 May 2021
//
///////////////////////////////////////////////////
#include<stdio.h>

void pattern(int no)
{
	int i=0;
	char ch='A';
    
    for(i=1;i<=no;i++)
    {
    	printf("%c\t",ch);
    	ch++;
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
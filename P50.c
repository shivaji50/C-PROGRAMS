/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : pattern()
// Description   : display pattern
// Input         : iRow = 3    iCol = 5
// Output        : A A A A A
//                 B B B B B
//                 C C C C C
// Author        : Shivaji das
// Date          : 5 May 2021
//
///////////////////////////////////////////////////
#include<stdio.h>
void pattern(int row,int col)
{
	int i=0,j=0;
	char ch='A';
	

	for(i=1;i<=row;i++)
	{
		for (j=1;j<=col;j++)
	
			
	    {
			printf("%c\t",ch);
			
		}
		
		ch++;
	      
		printf("\n");
	}

}

int main()
{
	int value1=0;int value2=0;

	printf("Enter Row and Colum\n");
	scanf("%d  %d",&value1,&value2);
	 pattern(value1,value2);

	 return 0;
}
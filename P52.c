/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : pattern()
// Description   : display pattern
// Input         : iRow = 3    iCol = 4
// Output        : 1 2 3 4 
//                 5 6 7 8 
//                 9 10 11 12
// Author        : Shivaji das
// Date          : 5 May 2021
//
///////////////////////////////////////////////////
#include<stdio.h>
void pattern(int row,int col)
{
	int i=0,j=0;
	 
	int no=1;
	

	for(i=1;i<=row;i++)
	{
		for (j=1;j<=col;j++)
	
			
	    {
			printf("%d\t",no);
			no++;
		}
		
		
		
	      
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
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : pattern()
// Description   : display pattern
// Input         : iRow = 4    iCol = 4
// Output        :  1 2 3 4 
//                    2 3 4 
//                      3 4 
//                        4
// Author        : Shivaji das
// Date          : 8 May 2021
//////////////////////////////////////////////////////
#include<stdio.h>
void pattern(int row,int col)
{
	int i=0,j=0,no=0;
	 no=col;
	

	for(i=1;i<=row;i++)
	{
		for (j=1;j<=col;j++)
		{	
	
		if(i>j)	
	    {
			printf("\t");
			
		}
		else
		{
			printf("%d\t",j);
		}	
	}
		
	printf("\n");
	}

}
int main()
{

	int value1=0;
	int value2=0;

	printf("Enter Row and Colum\n");
	scanf("%d  %d",&value1,&value2);
    pattern(value1,value2);

	 return 0;
}
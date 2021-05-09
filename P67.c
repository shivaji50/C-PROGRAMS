////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : pattern()
// Description   : display pattern
// Input         : iRow =5    iCol =5
// Output        : 1 2 3 4 5
//                 1 2     5                       
//                 1   3   5                         
//                 1     4 5                    
//                 1 2 3 4 5                        
// Author        : Shivaji das
// Date          : 9 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
void pattern(int row,int col)
{
	int i=0,j=0;
	if(row!=col)
	{
		return;
	}
	
	 for(i=1;i<=row;i++)
	{
		for (j=1;j<=col;j++)
	 {	
	
		if((i==j)||(i==1)||(j==1)||(i==row)||(j==col))	
	    {
			printf("%d\t",j);
		}
		
		else
		{
			printf(" \t");
		}	
			
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

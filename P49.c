/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : pattern()
// Description   : display pattern
// Input         : iRow = 4     iCol = 4
// Output        : A B C D
//                 a b c d
//                 A B C D
//                 a b c d 
// Author        : Shivaji das
// Date          : 5 May 2021
//
///////////////////////////////////////////////////
#include<stdio.h>
void pattern(int row,int col)
{
	int i=0,j=0;
	char ch='A';
	char sd='a';

	for(i=1;i<=row;i++)
	{
		for (j=1;j<=col;j++)
	{		
			if(i%2!=0)
	    {
			printf("%c\t",ch);
			ch++;
		}
		if(i%2==0)
		{
			printf("%c\t",sd);
			sd++;
		}
	}	
	      ch='A';
	      sd='a';
		printf("\n");
	}

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display()
// Description   : accept range from user and return addition of all numbers in between that range. 
//(Range should contains positive numbers only) 
// Input         : 23 35
// Output        : 212
// Author        : Shivaji das
// Date          : 2 May 2021
//
///////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int Display(int nos,int noe)
{
	int icnt=0,sum=0;
	if((nos>noe)||(nos<0))
	{   
		printf("Invalid range\n");
		exit(0);
	}

	for(icnt=nos;icnt<=noe;icnt++)
	{
       sum=sum+icnt;
	}
	return sum;
		
		
}

int main()
{
	int i=0,j=0,ret=0;

	printf("Enter the Start\n");
	scanf(" %d",&i);

	printf("Enter the End\n");
	scanf("%d",&j);


	ret=Display(i,j);

	printf("The addition is %d",ret);

	return 0;
}
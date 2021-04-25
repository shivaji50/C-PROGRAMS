////////////////////////////////////////////////////////////////////////////
//
// Function Name :  dispaly()
// Description   :   display first number in second number of times.
// Input         :  12 3
// Output        :  12 12 12
// Author        :  Shivaji das
// Date          :  25 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void display(int no,int f)
{
	int i=0;
	for(i=1;i<=f;i++)
	{
		printf("%d",no);
	}
}
int main()
{
	int value=0;
	int fre=0;
	printf("Enter number\n");
	scanf("%d",&value);
	printf("Enter frequency\n");
	scanf("%d",&fre);
	display(value,fre);
	return 0;
}
///////////////////////////////////////////////////////////////////////////
//
// Function Name :  Multi()
// Description   :  accept number from user and display its multiplication of factors. .
// Input         :  12
// Output        :  144 (1 * 2 * 3 * 4 * 6)
// Author        :  Shivaji das
// Date          :  28 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int Multi(int no)
{
	int i=0;
	int mult=1;
	for(i=1;i<no;i++)
	{
		if((no%i)==0)
        {
        	mult=mult*i;
        }
	}
	return mult;

}

int main()
{
	int i=0;
	int ret=0;
	 printf("Enter the number");
	 scanf("%d",&i);
	  ret=Multi(i);
	  printf("%d",ret);
	  return 0;
}
///////////////////////////////////////////////////////////////////////////
//
// Function Name :  Even()
// Description   :  accept number from user and display its factors in decreasing order. 
// Input         :  12
// Output        :  6 4 3 2 1
// Author        :  Shivaji das
// Date          :  28 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Even(int no)
{
	int i=0;
  if(no<=0)
  {
  	return;
  }

  for(i=no-1;i>=1;i--)
  {
    if(no%i==0)
     {

     printf("% d",i);
      
    }
  }
}

int main()
{
	int value=0;
	printf("Enter number");
	scanf("%d",&value);
	Even(value);
	return 0;
}
////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Even()
// Description   :  accept one number from user and print that number of even numbers on screen.
// Input         :  Integer
// Output        :  Integer
// Author        :  Shivaji das
// Date          :  27 april 2021
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
  for(i=1;i<=no*2;i++)
  {
  	if(i%2==0)
  	{
  		printf("%d ",i);
  	
    }
  }
}
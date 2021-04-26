////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Even()
// Description   :  accept number from user and print even factors of that number.
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
  for(i=1;i<=no;i++)
  {
    if((no%i==0)&&(i%2==0))
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
///////////////////////////////////////////////////////////////////////////
//
// Function Name :  sum()
// Description   :  which accept number from user and return summation of all its non factors. . 
// Input         :  12 
// Output        :  50 
// Author        :  Shivaji das
// Date          :  28 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int sum(int no)
{
	int i=0;
  int sumo=0;
  if(no<0)
  {
    no=-no;
  }

  for(i=1;i<=no;i++)
  {
    if(no%i!=0)
     {
       sumo=sumo+i;
     }
  }
  
  return sumo;
}

int main()
{
	int value=0;
  int ret=0;
	printf("Enter number");
	scanf("%d",&value);
	ret=sum(value);
  printf("sum of non factor is %d",ret);
	return 0;
}
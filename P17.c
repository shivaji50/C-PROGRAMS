///////////////////////////////////////////////////////////////////////////
//
// Function Name : sum()
// Description   : accept number from user and return difference between summation of all its factors and non factors. 
// Input         : 12
// Output        : -34 (16 - 50) 
// Author        : Shivaji das
// Date          : 28 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int sum(int no)
{
	int i=0;
  int sumo=0;
  int sume=0;
  int dif=0;
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
  for(i=1;i<no;i++)
  {
    if(no%i==0)
     {
       sume=sume+i;
     }
  }
  return dif=sume-sumo;
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
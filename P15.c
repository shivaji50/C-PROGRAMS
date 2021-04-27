///////////////////////////////////////////////////////////////////////////
//
// Function Name :  Even()
// Description   :  accept number from user and display all its non factors. 
// Input         :  12
// Output        :  5 7 8 9 10 11 
// Author        :  Shivaji das
// Date          :  28 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Even(int no)
{
	int i=0;
  
  if(no<0)
  {
    no=-no;
  }

  for(i=1;i<=no;i++)
  {
    if(no%i!=0)
     {
       printf("%d ",i)
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
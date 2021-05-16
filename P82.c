////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Dif()
// Description   : return index of last occurrence of that NO. 
// Input         : NO: 6
// Elements      : 15 66 3 70 10 88 
// Output        : 45                 
// Author        : Shivaji das
// Date          : 16 May 2021
//////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int Dif(int Arr[],int Length)
{
	int i=0,icnt=1,sum=0;
	if(Arr==NULL)
	{
		return -1;
	}

	for(i=0;i<Length;i++)
	{	
        if(Arr[i]%2!=0)
        {
           
            icnt=icnt*Arr[i];
            sum=icnt;
        }   
	}
     
   if((sum>0)||(sum!=0))

    {
        return sum;
    }
    else
    {
        return 0;
    } 
} 


int main()
{
    int Noe=0,Ret=0,i=0;
    int *arr=NULL;

    printf("Enter Number of elemnts");
    scanf("%d",&Noe);

    arr=(int *)malloc(Noe*sizeof(int));
    if(arr==NULL)
    {
    	printf("Unable to allocate Memory");
    	return -1;
    }

    printf("Enter %d Elements\n",Noe);

    for(i=0;i<Noe;i++)
    {
    	scanf("%d",&arr[i]);
    }

    
    Ret=Dif(arr,Noe);

    printf("Product is %d",Ret);

    free(arr);

    return 0;

}
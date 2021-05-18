////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Dif()
// Description   : return the difference between largest and smallest number.
// Input         : NO: 6
// Elements      : 85 66 3 66 93 88
// Output        : 90 (93 -3)               
// Author        : Shivaji das
// Date          : 18 May 2021
//////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int Dif(int Arr[],int Length)
{
	int i=0,icnt=1,max=0,sm=0,dif=0;
    max=Arr[0];
    sm=Arr[0];


	if(Arr==NULL)
	{
		return -1;
	}

	for(i=0;i<Length;i++)
	{	
        if(Arr[i]>max)
        {
           
            max=Arr[i];
        } 
        else if(Arr[i]<sm)
        {
            sm=Arr[i];
        }  
	}
    return dif=max-sm;;
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

    printf("Difference is %d",Ret);

    free(arr);

    return 0;

}
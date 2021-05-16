////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Dif()
// Description   : Display all elements from that range
// Input         : N : 6 
// Start         : 60 
// End           : 90 
// Elements      : 85 66 3 76 93 88 
// Output        : 66 76 88                               
// Author        : Shivaji das
// Date          : 16 May 2021
//////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Dif(int Arr[],int Length,int start,int end)
{
	int i=0;
	if((Arr==NULL)||(start>end))
	{
        printf("Invalid input\n");
		exit(0);
	}

	for(i=0;i<Length;i++)
	{	
		if((Arr[i]>start)&&(Arr[i]<end))
		{
			printf("%d ",Arr[i]);
		}
	}		
} 

int main()
{
    int Noe=0,Ret=0,i=0,is=0,ie=0;
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

    printf("Enter the Start point\n");
    scanf("%d",&is);

    printf("Enter the End point\n");
    scanf("%d",&ie);


    Dif(arr,Noe,is,ie);

    free(arr);

    return 0;

}
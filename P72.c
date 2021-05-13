////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Dif()
// Description   : display all such elements which are multiples of 11.
// Input         : N : 6 
//                 Elements : 85 66 3 80 93 88
// Output        : 66 55 88                  
// Author        : Shivaji das
// Date          : 13 May 2021
////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Dif(int Arr[],int Length)
{
	int i=0;
	

	for(i=0;i<Length;i++)
	{	
		if(Arr[i]%11==0)
		{
			printf("%d ",Arr[i]);
		}
	}	
} 


int main()
{
    int Noe=0,i=0;
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

    Dif(arr,Noe);

    free(arr);

    return 0;

}
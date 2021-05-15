////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Dif()
// Description   : check whether that numbers contains 11 in it or not. 
// Input         : N : 6 
//                 Elements : 85 66 3 80 93 88
// Output        : 11 is present
// Author        : Shivaji das
// Date          : 15 May 2021
////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int Dif(int Arr[],int Length)
{
	int i=0,Esum=0,Osum=0,dif=0;
	if(Arr==NULL)
	{
		return -1;
	}

	for(i=0;i<Length;i++)
	{	
		if(Arr[i]==11)
		{
			break;
		}
	}
	return i;		
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

    if(Ret==Noe)
    {
        printf("11 is Not present\n");
    }
    else
    {
        printf("11 is Present\n");
    }


    free(arr);

    return 0;

}
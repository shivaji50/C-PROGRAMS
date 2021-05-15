////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Dif()
// Description   : accept one another number as NO , return frequency of NO form it.
// Input         : N : 6 
//                 NO: 66
//                 Elements : 85 66 3 66 93 88
// Output        : 2                  
// Author        : Shivaji das
// Date          : 15 May 2021
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int Dif(int Arr[],int Length,int no)
{
	int i=0,icnt=0;
	if(Arr==NULL)
	{
		return -1;
	}

	for(i=0;i<Length;i++)
	{	
		if(Arr[i]==no)
		{
			icnt++;
		}		
	}	
	return icnt;		
} 


int main()
{
    int Noe=0,Ret=0,i=0,Num=0;
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

    printf("Enter the No u want to find Frequency of it\n");
    scanf("%d",&Num);

    Ret=Dif(arr,Noe,Num);

    printf("Frequency is %d",Ret);

    free(arr);

    return 0;

}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Dif()
// Description   : accept one another number as NO , check whether NO is present or not.
// Input         : N : 6 
//                 NO: 66
//                 Elements : 85 66 3 66 93 88
// Output        : TRUE                  
// Author        : Shivaji das
// Date          : 16 May 2021
//////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int Dif(int Arr[],int Length,int no)
{
	int i=0,Esum=0,Osum=0,dif=0;
	if(Arr==NULL)
	{
		return -1;
	}

	for(i=0;i<Length;i++)
	{	
		if(Arr[i]==no)
		{
			break;
		}
	}
	
	return i;		
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

    printf("Enter the numbe to check\n");
    scanf("%d",&Num);

    Ret=Dif(arr,Noe,Num);

    if(Ret==Noe)
    {
        printf("Number is Not present\n");
    }
    else
    {
        printf("Number is Present\n");
    }


    free(arr);

    return 0;

}
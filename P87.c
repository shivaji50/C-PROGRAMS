////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Dif()
// Description   : display summation of digits of each number.
// Input         : NO: 6
// Elements      : 8225 665 3 76 953 858 
// Output        : 17 17 3 13 17 21              
// Author        : Shivaji das
// Date          : 18 May 2021
//////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Dif(int Arr[],int Length)
{
	int i=0,icnt=1,max=0,idigit=0;
    max=Arr[0];

	if(Arr==NULL)
	{
		exit(0);
	}

	for(i=0;i<Length;i++)
	{	
         max=0;
        while(Arr[i]>0)
        {
            idigit=Arr[i]%10;
            max=max+idigit;
            Arr[i]=Arr[i]/10;
         }
         printf("%d ",max);
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

     Dif(arr,Noe);

    free(arr);

    return 0;

}
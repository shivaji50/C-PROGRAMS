////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Dif()
// Description   : display all such numbers which contains 3 digits in it. 
// Input         : NO: 6
// Elements      : 8225 665 3 76 953 858 
// Output        : 665 953 858               
// Author        : Shivaji das
// Date          : 18 May 2021
//////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Dif(int Arr[],int Length)
{
	int i=0,icnt=1,max=0;
    

	if(Arr==NULL)
	{
		exit(0);
	}
    printf("The 3 digits number are\n");
	for(i=0;i<Length;i++)
	{	
        if((Arr[i]>99)&&(Arr[i]<1000))
        {
             printf("%d  ",Arr[i]);
        }   
        else if((Arr[i]<-99)&&(Arr[i]>-1000))
        {
             printf("%d  ",Arr[i]);
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
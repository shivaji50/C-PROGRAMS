#include<stdio.h>
////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Even()
// Description   : Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
// Input         :  Character
// Output        :  TRUE/FALSE
// Author        :  Shivaji das
// Date          :  27 april 2021
//
////////////////////////////////////////////////////////////////////////////
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0	
int chkvowel(char cvalue)
{
	if((cvalue=='a')||(cvalue=='A')||(cvalue=='e')||(cvalue=='E')||(cvalue=='i')||(cvalue=='I')||(cvalue=='o')||(cvalue=='O')||(cvalue=='u')||(cvalue=='U'))
	{
		return TRUE;
    }
    else
	{
		return FALSE;
	}		
}
int main()
{
	char cvalue='\0';
	BOOL bret=FALSE;
	printf("enter character:");
	scanf("%c",&cvalue);
	bret=chkvowel(cvalue);
	if(bret==TRUE)
	{
		printf("its vowel");
	}
	else
	{
		printf("its not vowel");
	}
	return 0;
}
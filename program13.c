#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function name : Addition
// Input         : Integer , integer
// output        : Integer
// Description   : Addition
// date          : 04/10/2026
// Author        : Rajvardhan jalandar ghorpade
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Addition(
                int iNo1 ,   // 1st input
                int iNo2     // 2nd input
            )
{
    int iAns = 0;
    
    iAns = iNo1 + iNo2;      // business logic
    
    return iAns;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry point of the application
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1= 0, iValue2= 0, iResult= 0;
    
    printf("Enter first number : \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"unable to proceed as input is invalid \n");

        return EXIT_FAILURE;
    }

    printf("Enter second number : \n");
     if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"unable to proceed as input is invalid \n");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1,iValue2); 

    printf("Addition is : %d\n",iResult);
    
    
    return EXIT_SUCCESS;
}
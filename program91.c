#include<stdio.h>
#include<stdlib.h>

int factorial(int iNo)
{
    int iCnt = 0, iFact = 0;

    iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
   

    printf("Enter your number :\n");
    scanf("%d",&iValue);

    iRet = factorial(iValue);

    printf("factorial is: %d\n",iRet);

    return EXIT_SUCCESS;
}
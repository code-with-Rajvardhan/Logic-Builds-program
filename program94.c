#include<stdio.h>
#include<stdlib.h>

long long  factorial(int iNo)
{
    int iCnt = 0;
    long long int iFact = 0;

    iFact = 1;

    for(iCnt = 1,iFact = 1; iCnt <= iNo; iCnt++)       
    {
       iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    long long  iRet = 0;
   

    printf("Enter your number :\n");
    scanf("%d",&iValue);

    iRet = factorial(iValue);

    printf("factorial is: %lld\n",iRet);

    return EXIT_SUCCESS;
}
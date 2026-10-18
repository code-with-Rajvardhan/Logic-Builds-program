#include<stdio.h>
#include<stdlib.h>
typedef unsigned long long ULONG;
ULONG  factorial(int iNo)
{
    int iCnt = 0;
  ULONG iFact = 0;

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
   ULONG  iRet = 0;
   

    printf("Enter your number :\n");
    scanf("%d",&iValue);

    iRet = factorial(iValue);

    printf("factorial is: %lld\n",iRet);

    return EXIT_SUCCESS;
}
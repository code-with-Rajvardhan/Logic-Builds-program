#include<stdio.h>
#include<stdlib.h>

int sumfactor(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
       if((iNo % iCnt)== 0)
       {
           iSum = iSum + iCnt;
       }
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
   

    printf("Enter your number :\n");
    scanf("%d",&iValue);

    iRet = sumfactor(iValue);

    printf("sumation of fac : %d\n",iRet);

    return EXIT_SUCCESS;
}

// time complexity : O(N/2)
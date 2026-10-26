#include<stdio.h>
#include<stdlib.h>
int CountDigits(int iNo)
{
    int iDigit = 0;
    int icount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iNo = iNo/10;
        icount++;

    }
    return icount;
}

int CountDigits(int iNo)
{
    int iDigit = 0;
    int icount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iNo = iNo/10;
        icount++;

    }
    return icount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

   iRet = CountDigits(iValue);

   printf("number of digits : %d\n ",iRet);

    return EXIT_SUCCESS;
}
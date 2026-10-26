#include<stdio.h>
#include<stdlib.h>
int CountDigits(int iNo)
{
    
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

int Sumdigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;

        iNo = iNo/10;
    }
    return iSum;
}     

float AvgDigits(int iTotal , int iFrequency)
{
    float fAns = 0.0f;

    fAns = (float)iTotal / (float)iFrequency;    // seprate logic from main fn

    return fAns;
}

int main()
{
     int iValue = 0, iSum = 0,icount = 0;
     float fAvg = 0.0f;

     printf("Enter number :\n");
     scanf("%d",&iValue);

     iSum = Sumdigits(iValue);         //
     icount = CountDigits(iValue);     //      business logic

     fAvg = AvgDigits(iSum,icount);    //

     printf("Number of digits : %d\n ",icount);

     printf("summation of digits : %d \n",iSum);

     printf("avg of digits : %.2f\n ",fAvg);

     return EXIT_SUCCESS;
}
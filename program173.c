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


int main()
{
     int iValue = 0, iSum = 0,icount = 0;
     float fAvg = 0.0f;

     printf("Enter number :\n");
     scanf("%f",&iValue);

     iSum = Sumdigits(iValue);    // summation
     icount = CountDigits(iValue); // counting 

     fAvg = (float) iSum / (float)icount;  // averages 

     printf("Number of digits : %d \n",icount);

     printf("summation of digits : %d \n",iSum);

     printf("avg of digits : %.2f\n ",fAvg);

     return EXIT_SUCCESS;
}
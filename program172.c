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

float Avgdigits(int iNo)
{   
    
    
        int iDigit = 0;
        int iSum = 0;
        int icount = 0;
        float fAvg = 0.0f;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        iSum = Sumdigits(iNo);
        icount = CountDigits(iNo);

        fAvg = (float) iSum / (float)icount;  
        return fAvg;
}
     


int main()
{
    int iValue = 0;
   float fRet = 0.0f;

    printf("Enter number :\n");
    scanf("%f",&iValue);

   fRet = Avgdigits(iValue);

   printf("avg of digits : %.2f\n ",fRet);

    return EXIT_SUCCESS;
}
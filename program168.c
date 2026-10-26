#include<stdio.h>
#include<stdlib.h>
float Avgdigits(int iNo)
{   
    
    
        int iDigit = 0;
        int iSum = 0;
        int icount = 0;
        float fAvg = 0.0;

        while(iNo != 0)
        {
         
            iDigit = iNo % 10;
            
            iSum = iSum + iDigit;
            
            iNo = iNo/10;
            icount++;
        }

        return icount;
    }


int main()
{
    int iValue = 0;
   float fRet = 0.0f;

    printf("Enter number :\n");
    scanf("%f",&iValue);

   fRet = Avgdigits(iValue);

   printf("avg of digits : %f\n ",fRet);

    return EXIT_SUCCESS;
}
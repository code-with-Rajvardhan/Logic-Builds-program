#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheakPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1;iCnt<=iNo/2; iCnt++)
    {
        if((iNo % iCnt )== 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == 1)
    {
        printf("it is prime number\n");
    }
    else
    {
        printf("its not a prime number\n");
    }
}
int main()
{
   int iValue = 0;
   
   printf("Enter number :");
   scanf("%d",&iValue);

   CheakPrime(iValue);

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheakPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt<=iNo/2; iCnt++)
    {
        if((iNo % iCnt )== 0)
        {
           break;
        }
    }
   if(iCnt == (iNo/2) + 1)
   {
        return true;
   }
   else
   {
        return false;
   }
}
int main()
{
   int iValue = 0;
   bool bRet = false;
   
   printf("Enter number :");
   scanf("%d",&iValue);

   bRet = CheakPrime(iValue);

   if(bRet)
   {
        printf("it is prime number\n");
   }
   else
   {
    printf("its not prime number\n");
   }
   
    return EXIT_SUCCESS;
}
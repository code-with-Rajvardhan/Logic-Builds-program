#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheakPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 2, bFlag = true; iCnt<=iNo/2; iCnt++)
    {
        if((iNo % iCnt )== 0)
        {
          bFlag = false;
        }
    }
  return bFlag;
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
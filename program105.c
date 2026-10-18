#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool cheakperfect(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
       if((iNo % iCnt)== 0)
       {
           iSum = iSum + iCnt;
       }
    }

   if(iSum == iNo)
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
   

    printf("Enter your number :\n");
    scanf("%d",&iValue);

   bRet = cheakperfect(iValue);

   if(bRet == true)
   {
        printf("its a perfect number\n");
   }
   else
   {
        printf("its not perfect\n");
   }
   

    return EXIT_SUCCESS;
}

// time complexity : O(N/2)
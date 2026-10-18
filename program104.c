#include<stdio.h>
#include<stdlib.h>

void cheakperfect(int iNo)
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
         printf("ita a perfect number\n");
    }
    else
    {
         printf("ita a perfect number\n");
   }
}

int main()
{
    int iValue = 0;
   

    printf("Enter your number :\n");
    scanf("%d",&iValue);

   cheakperfect(iValue);

   

    return EXIT_SUCCESS;
}

// time complexity : O(N/2)
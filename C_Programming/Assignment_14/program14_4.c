#include<stdio.h>
#include<stdlib.h>

int Sumnonfact(int iNo)
{
    int icnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        if(iNo % icnt != 0)
        {
           iSum = iSum + icnt;
        }
    }
   return iSum;
}

int main()
{
    int iValue  = 0;
    int iRet = 0;
    

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet =Sumnonfact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

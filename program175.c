#include<stdio.h>
#include<stdlib.h>

int Reverse(int iNo)
{
    int iRev = 0, iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    return iRev;
}
int main()
{
     int iValue = 0,iRet = 0;
     

     printf("Enter number :\n");
     scanf("%d",&iValue);

     iRet = Reverse(iValue);

     printf("reverse is %d ",iRet);
     

     return EXIT_SUCCESS;
}
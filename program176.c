#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheakPallindrome(int iNo)
{
    int iRev = 0, iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;

    }
    
    if(iRev == iNo)   // issue
        {
            return true;
        }
        else
        {
            return false;
        }
       return iRev;
    
}
int main()
{
     int iValue = 0;
     bool bRet = false;
     

     printf("Enter number :\n");
     scanf("%d",&iValue);

     bRet = CheakPallindrome(iValue);

     

      if(bRet == true)
        {
            printf(" its pallindrome \n");
        }
        else
        {
          printf(" its  not pallindrome \n");
        }
     

     return EXIT_SUCCESS;
}
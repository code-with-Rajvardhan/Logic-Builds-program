#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheakPallindrome(int iNo)
{
    int iRev = 0, iDigit = 0;
    int iTemp = 0;

    iTemp = iNo;    // copy of iNo for compare 

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
        
    }
    
            if(iRev == iTemp)  
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
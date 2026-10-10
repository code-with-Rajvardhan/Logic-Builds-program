#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheakEven(int iNo)
{
    
    if((iNo % 2)== 0)
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheakEven(iValue);

    if(bRet == true)
    {
        printf("Even \n");
    }
    else
    {
        printf("Odd \n");
    }

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

void CheakEven(int iNo)
{
    
    if((iNo % 2)== 0)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is Odd \n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheakEven(iValue);


    return EXIT_SUCCESS;
}
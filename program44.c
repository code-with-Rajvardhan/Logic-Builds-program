#include<stdio.h>
#include<stdlib.h>

float Avrg(int iNo1 , int iNo2)
{
     float fAns = 0.0f;

    fAns = (iNo1 + iNo2) / 2;

     return fAns;

   
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter first number \n");
    scanf("%d",&iValue1);

    printf("Enter second number \n");
    scanf("%d",&iValue2);

    fResult = Avrg(iValue1,iValue2);

    printf("avg is: %f \n", fResult);

    return EXIT_SUCCESS;
}
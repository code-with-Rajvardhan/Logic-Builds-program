#include<stdio.h>
#include<stdlib.h>

int RangeDisplayRevers(int iNo1 , int iNo2)
{
    int icnt =0;
    for (icnt=iNo2 ; icnt>=iNo1 ; icnt--)
    {
        printf("%d\n",icnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first range\n");
    scanf("%d",&iValue1);

    printf("Enter second range\n");
    scanf("%d",&iValue2);

        printf("range is :\n");


 RangeDisplayRevers(iValue1 , iValue2);


    return EXIT_SUCCESS;
}
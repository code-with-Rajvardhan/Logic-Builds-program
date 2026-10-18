#include<stdio.h>
#include<stdlib.h>
void display(int iNo)
{
    int icnt = 0;
    
    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("jay ganesh....\n");
    }
    
}

int main()
{
    int iValue = 0;

    printf("enter the frequncy\n");
    scanf("%d",&iValue);

    display(iValue);

    return EXIT_SUCCESS;
}
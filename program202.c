/*
    input :  4


    output:  A  B  C  D

*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int icnt = 0;
    char ch = '\0';

    ch = 'A';

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    
    printf("\n");
}



int main()
{
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
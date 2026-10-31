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

    

    for((icnt = 1,ch = 'A'); icnt <= iNo; (icnt++,ch++))
    {
        printf("%c\t",ch);
        
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
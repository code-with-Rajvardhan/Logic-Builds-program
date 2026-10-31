/*
    input :  4


    output: 1 A 2 B 3 C 4 D

*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int icnt = 0;
    char ch = '\0';

    

    for((icnt = 1,ch = 'a'); icnt <= iNo; (icnt++,ch++))
    {
        printf("%d\t%c\t",icnt,ch);
        
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
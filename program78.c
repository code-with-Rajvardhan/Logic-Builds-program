// input : 4
// output 1 * 2 * 3  * 4 *

#include<stdio.h>
#include<stdlib.h>
void display(int iNo)
{
    int icnt =0;
    
    for(icnt = 1; icnt <= 10; icnt = icnt+=2)   // iCnt++ -> icnt = icnt + 1
    {
        printf("%d\t",icnt);
        
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("enter the frequncy\n");
    scanf("%d",&iValue);

    display(iValue);

    return EXIT_SUCCESS;
}
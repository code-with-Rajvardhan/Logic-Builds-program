// input : 4
// output 1 * 2 * 3  * 4 *

#include<stdio.h>
#include<stdlib.h>
int Summation(int iNo)
{
    int icnt = 0;
    int iSum = 0;
    
    for(icnt = 1; icnt <= iNo;  icnt++)   
    {
       iSum = iSum + icnt;  
    }
     return iSum;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the frequncy\n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("summation is : %d\n",iRet);

    return EXIT_SUCCESS;
}
/*
    input :  4


    output:   A  B  C  D

*/
#include<stdio.h>
#include<stdlib.h>





int main()
{
    int icnt = 0;

    for(icnt = 65; icnt <= 90; icnt++)
    {
        printf("%d\t%c\n",icnt,icnt);
    }

    return EXIT_SUCCESS;
}
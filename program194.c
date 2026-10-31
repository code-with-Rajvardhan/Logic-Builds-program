/*
    input :  4


    output:   A  B  C  D

*/
#include<stdio.h>
#include<stdlib.h>





int main()
{
    int icnt = 0;

    for(icnt = 97; icnt <= 122; icnt++)
    {
        printf("%c\n",icnt);
    }

    return EXIT_SUCCESS;
}
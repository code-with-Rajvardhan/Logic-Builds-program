/*
    input :  4


    output:   A  B  C  D

*/
#include<stdio.h>
#include<stdlib.h>





int main()
{
    int icnt = 0;

    for(icnt = 'A'; icnt <= 'Z'; icnt++)
    {
        printf("%d\t%o\t%x\t%c\n",icnt,icnt,icnt,icnt);
    }

    return EXIT_SUCCESS;
}
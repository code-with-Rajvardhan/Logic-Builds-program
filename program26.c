#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sNAme[30];

    printf("Enter your name :\n");
    scanf("%[^'\n']s",sNAme);

    printf("Welcome %s \n",sNAme);

    return EXIT_SUCCESS;
}
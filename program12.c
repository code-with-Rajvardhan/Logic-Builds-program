#include<stdio.h>
#include<stdlib.h>

int main()
{
   
    int No = 0;

    printf("Enter the Number : \n");
    if(scanf("%d",&No) != 1)
    {
        fprintf(stderr,"invalid input \n");

        return EXIT_FAILURE;
    }

   
    printf("input is valid \n");


    return EXIT_SUCCESS;
}